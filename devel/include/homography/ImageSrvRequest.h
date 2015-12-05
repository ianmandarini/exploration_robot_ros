// Generated by gencpp from file homography/ImageSrvRequest.msg
// DO NOT EDIT!


#ifndef HOMOGRAPHY_MESSAGE_IMAGESRVREQUEST_H
#define HOMOGRAPHY_MESSAGE_IMAGESRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace homography
{
template <class ContainerAllocator>
struct ImageSrvRequest_
{
  typedef ImageSrvRequest_<ContainerAllocator> Type;

  ImageSrvRequest_()
    {
    }
  ImageSrvRequest_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::homography::ImageSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::homography::ImageSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ImageSrvRequest_

typedef ::homography::ImageSrvRequest_<std::allocator<void> > ImageSrvRequest;

typedef boost::shared_ptr< ::homography::ImageSrvRequest > ImageSrvRequestPtr;
typedef boost::shared_ptr< ::homography::ImageSrvRequest const> ImageSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::homography::ImageSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::homography::ImageSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace homography

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'homography': ['/home/cc/ee106a/fa15/class/ee106a-bc/final_proj/src/homography/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::homography::ImageSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::homography::ImageSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::homography::ImageSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::homography::ImageSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::homography::ImageSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::homography::ImageSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::homography::ImageSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::homography::ImageSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::homography::ImageSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "homography/ImageSrvRequest";
  }

  static const char* value(const ::homography::ImageSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::homography::ImageSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::homography::ImageSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::homography::ImageSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ImageSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::homography::ImageSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::homography::ImageSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HOMOGRAPHY_MESSAGE_IMAGESRVREQUEST_H