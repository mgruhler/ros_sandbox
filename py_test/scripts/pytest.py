#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def callback(msg):
    rospy.loginfo("I heard %s", msg.data)

# main loop
if __name__ == "__main__":
    rospy.init_node('py_test')
    rospy.Subscriber("test", String, callback)
    param = rospy.get_param("~dir")
    rospy.sleep(2)
    rospy.loginfo(param)
    try:
        while not rospy.is_shutdown():
            rospy.spin()
            rospy.sleep(1.0)
    except rospy.ROSInterruptException:
        print("Exit")
