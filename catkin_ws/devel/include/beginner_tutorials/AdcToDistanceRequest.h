// Generated by gencpp from file beginner_tutorials/AdcToDistanceRequest.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_ADCTODISTANCEREQUEST_H
#define BEGINNER_TUTORIALS_MESSAGE_ADCTODISTANCEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct AdcToDistanceRequest_
{
  typedef AdcToDistanceRequest_<ContainerAllocator> Type;

  AdcToDistanceRequest_()
    : adc(0)  {
    }
  AdcToDistanceRequest_(const ContainerAllocator& _alloc)
    : adc(0)  {
  (void)_alloc;
    }



   typedef int16_t _adc_type;
  _adc_type adc;





  typedef boost::shared_ptr< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AdcToDistanceRequest_

typedef ::beginner_tutorials::AdcToDistanceRequest_<std::allocator<void> > AdcToDistanceRequest;

typedef boost::shared_ptr< ::beginner_tutorials::AdcToDistanceRequest > AdcToDistanceRequestPtr;
typedef boost::shared_ptr< ::beginner_tutorials::AdcToDistanceRequest const> AdcToDistanceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/sytasch/ROS/turtle/catkin_ws/src/intro_to_ros/sample_code/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f506cc1be2a1e30d652f2010679b9c5a";
  }

  static const char* value(const ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf506cc1be2a1e30dULL;
  static const uint64_t static_value2 = 0x652f2010679b9c5aULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/AdcToDistanceRequest";
  }

  static const char* value(const ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 adc\n\
";
  }

  static const char* value(const ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.adc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AdcToDistanceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::AdcToDistanceRequest_<ContainerAllocator>& v)
  {
    s << indent << "adc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_ADCTODISTANCEREQUEST_H
