#include "mbed.h"
//#include "platform/mbed_thread.h"
#include "vesc.h"

CAN can1(PA_11, PA_12, 1000000);
vesc _vesc1;
BufferedSerial pc(USBTX, USBRX);
InterruptIn button(USER_BUTTON);

static unsigned int speed_mode = 0;
void speed_switch(){
    speed_mode++;
    if(speed_mode>3)speed_mode=0;
    }


int main(){
    _vesc1.vesc_init(90,&can1); 
    while(1){
        _vesc1.comm_can_set_pos(50);
        }
    }
