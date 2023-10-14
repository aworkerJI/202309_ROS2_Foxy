from ros_rclpy_package_msgs.srv import MultiSpawn 
from turtlesim.srv import TeleportAbsolute
from turtlesim.srv import Spawn
from geometry_msgs.msg import Twist
import rclpy as rp
import numpy as np
from rclpy.node import Node


class MultiSpawning(Node):

    def __init__(self):
        super().__init__('multi_spawn')
        self.server = self.create_service(MultiSpawn, 'multi_spawn', self.callback_service)  
        self.teleport = self.create_client(TeleportAbsolute, '/turtle1/teleport_absolute')
        self.spawn = self.create_client(Spawn, '/spawn')
        self.req_teleport = TeleportAbsolute.Request()
        self.req_spawn = Spawn.Request()
        self.center_x = 5.54
        self.center_y = 5.54


    def calc_position(self, n, r):
        gap_theta = 2*np.pi / n
        theta = [gap_theta*n for n in range(n)]
        x = [r*np.cos(th) for th in theta]
        y = [r*np.sin(th) for th in theta]
        return x, y, theta

    def callback_service(self, request, response):
        x, y, theta = self.calc_position(request.num, 3)

        for n in range(len(theta)):
            self.req_spawn.x = x[n] + self.center_x
            self.req_spawn.y = y[n] + self.center_y
            self.req_spawn.theta = theta[n]
            self.spawn.call_async(self.req_spawn)

        response.x = x
        response.y = y 
        response.theta = theta 

        self.make_num = request.num+2
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

        return response

    def timer_callback(self):
        msg = Twist()
        #msg.linear.x = 0.0
        msg.angular.z = 1.0
        for n in range(1, self.make_num):
            t_node1 = '/turtle'
            t_node2 = str(n)
            t_node3 = '/cmd_vel'
            turtle_node = t_node1 + t_node2 + t_node3
            self.publisher= self.create_publisher(Twist, turtle_node, 10)
            self.publisher.publish(msg)    



def main(args=None):
    rp.init(args=args)
    multi_spawn = MultiSpawning()
    rp.spin(multi_spawn)

    
    rp.shutdown()

if __name__ == '__main__':
    main()
