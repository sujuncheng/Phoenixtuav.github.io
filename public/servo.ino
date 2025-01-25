#include <Servo.h>
#include <ros.h>
#include <geometry_msgs/Point.h>

// 定义舵机引脚
#define SERVO_PIN_1 3
#define SERVO_PIN_2 5
#define SERVO_PIN_3 6

// 创建ROS节点
ros::NodeHandle nh;

// 创建舵机对象
Servo servo1;
Servo servo2;
Servo servo3;

// 订阅的消息回调函数
void messageCallback(const geometry_msgs::Point& msg)
{
  // 获取接收到的旋转目标角度
  int angle1 = msg.x; // 对应舵机1的旋转角度
  int angle2 = msg.y; // 对应舵机2的旋转角度
  int angle3 = msg.z; // 对应舵机3的旋转角度

  // 控制舵机旋转到指定角度
  servo1.write(angle1);

  servo2.write(angle2);

  servo3.write(angle3);
}

// 创建订阅对象
ros::Subscriber<geometry_msgs::Point> sub("/arduino_ros", &messageCallback);

void setup()
{
  // 初始化舵机引脚
  servo1.attach(SERVO_PIN_1);
  servo2.attach(SERVO_PIN_2);
  servo3.attach(SERVO_PIN_3);

  // 初始化ROS节点
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{
  // 处理ROS消息
  nh.spinOnce();
  delay(10);
}