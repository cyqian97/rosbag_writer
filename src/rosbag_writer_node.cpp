#include "rosbag_writer/rosbag_writer.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "rosbag_writer_node");
    RosbagWriterBase<int> rw("topic_name");
    rw.test = 2;
    rw.test1(1);
    rw.test2("2");
}