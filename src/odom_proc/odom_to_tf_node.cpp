#include <odom_proc/odom_to_tf.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "odom_to_tf");
    ros::NodeHandle nh, pnh("~");
    odom_proc::OdometryToTransform node(nh, pnh);
    ros::spin();
    return 0;
};
