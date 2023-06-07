#include <ros/ros.h>
#include <string>
#include <vector>
#include <iostream>
#include <filesystem>

#include <nav_msgs/Odometry.h>

template <class T>
class RosbagWriterBase
{
public:
   T test;

   RosbagWriterBase(std::string topic_name)
   {
      std::cout << "-" << std::endl;
   };
   void test1(int i);
   void test2(std::string i);

private:
   ros::NodeHandle nh_;
   ros::Subscriber m_sub;
};

template<class T>
void RosbagWriterBase<T>::test1(int i)
{
   std::cout << "int" << std::endl;
}
template<class T>
void RosbagWriterBase<T>::test2(std::string i)
{
   std::cout << "string" << std::endl;
}