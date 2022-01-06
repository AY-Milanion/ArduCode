#include "mode.h"
#include "Rover.h"
#include <SRV_Channel/SRV_Channel.h>
#include <AP_HAL/AP_HAL.h>
#include <AP_ServoRelayEvents/AP_ServoRelayEvents.h>


void ModeHold::update()
{
AP_ServoRelayEvents ServoRelayEvents;

    float throttle = -100.0f;

    // if vehicle is balance bot, calculate actual throttle required for balancing
    if (rover.is_balancebot()) {
        rover.balancebot_pitch_control(throttle);
    }

    // relax mainsail
    g2.motors.set_mainsail(100.0f);
    g2.motors.set_wingsail(0.0f);
    
    g2.motors.set_throttle(throttle);
    g2.motors.set_steering(0.0f);
    ServoRelayEvents.do_set_servo(3, 1500);
}


