#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Robotmap.h"
#include "Init.h"
#include "Print.h"

class OI {
private:
	Print* print;
	Init* init;
	
	Joystick* left;
	Joystick* right;
	Joystick* third;
	
	JoystickButton* ltrigger;
	JoystickButton* r_q_7;
	JoystickButton* r_h_8;
	JoystickButton* r_th_9;
	JoystickButton* r_full_10;
	
	JoystickButton* rtrigger;
	JoystickButton* l_q_7;
	JoystickButton* l_h_8;
	JoystickButton* l_th_9;
	JoystickButton* l_full_10;
	
public:
	OI(Print *pr, Init *i);
	float GetLeftY();
	float GetRightY();
	float GetThirdY();
	float GetThirdZ();
};

#endif
