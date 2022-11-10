#include <ros/ros.h>
#include "nodelet/loader.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "darknet_ros");
    nodelet::V_string nargv;
    nodelet::Loader nodelet;
    nodelet::M_string remap(ros::names::getRemappings());
    std::string nodelet_name = ros::this_node::getName();
    nodelet.load(nodelet_name, "darknet_ros/yolo_object_detector", remap, nargv);

    ros::spin();
    return 0;
}