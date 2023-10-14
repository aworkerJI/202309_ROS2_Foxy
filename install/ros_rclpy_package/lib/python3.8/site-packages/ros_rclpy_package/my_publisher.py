import rclpy as rp
from rclpy.node import Node

from geometry_msgs.msg import Twist

import sys
print(sys.argv)


class TurtlesimPublisher(Node):

    def __init__(self):
        super().__init__('turtlesim_publisher')
        # self.publisher = self.create_publisher(Twist, '/turtlesim/turtle1/cmd_vel', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Twist()
        msg.linear.x = 0.0
        msg.angular.z = 1.0
        t_node1 = '/turtle'
        t_node2 = str(1)
        t_node3 = '/cmd_vel'
        turtle_node = t_node1 + t_node2 + t_node3
        self.publisher= self.create_publisher(Twist, turtle_node, 10)
        self.publisher.publish(msg)

        #self.publisher.publish(msg)

       
        
      
        
        
        '''
        for n in range(1, self.make_num+1):
            t_node1 = '/turtle'
            t_node2 = str(n)
            t_node3 = '/cmd_vel'
            turtle_node = t_node1 + t_node2 + t_node3
            pub = self.test_node.create_publisher(Twist, turtle_node, 10)
            pub.publish(msg)
        '''



        '''
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        '''
    ''' 
    def timer_callback(self):
        print('timer_callback')
        msg = Twist()
        msg.angular.z = 1.0
        for n in range(1, self.make_num+1):
            t_node1 = '/turtle'
            t_node2 = str(n)
            t_node3 = '/cmd_vel'
            turtle_node = t_node1 + t_node2 + t_node3
            self.pub = self.test_node.create_publisher(Twist, turtle_node, 10)
            self.pub.publish(msg)
    '''     


def main(args=None):
    rp.init(args=args)

    turtlesim_publisher = TurtlesimPublisher()
    rp.spin(turtlesim_publisher)

    turtlesim_publisher.destroy_node()
    rp.shutdown()


if __name__ == '__main__':
    main()

    