#include <termio.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>

#define KEYCODE_A 0x61
#define KEYCODE_D 0x64
#define KEYCODE_S 0x73
#define KEYCODE_W 0x77
#define KEYCODE_Q 0x71
#define KEYCODE_E 0x65

class TeleopPR2Keyboard{
private:
    geometry_msgs::PoseStamped cmd;

    ros::NodeHandle n_;
    ros::Publisher pose_pub;

public:
    void init(){

    }

    ~TeleopPR2Keyboard(){}
    void keyboardLoop();
};

int kfd = 0;
struct termios cooked, raw;

void quit(int sig){

}

int main(int argc, char** argv){
    ros::init(argc, argv, "pr2_arms_keyboard");

    TeleopPR2Keyboard tpk;
    tpk.init();

    signal(SIGINT,quit);

    tpk.keyboardLoop();

    return 0;
}

void TeleopPR2Keyboard::keyboardLoop(){

}
