#include "pwm.h"
#include "buttons.h"

// stops the motor on button press
void stopInterrupt(){
  
    if(millis() - prevButtonPress > 200){
	
		desiredSpeed = 127;
    mode = 0;
		updatePwm();
		prevButtonPress = millis();
  } 
  
  }
