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
	
	JoystickButton* rtrigger;
	JoystickButton* ltrigger;
	
	JoystickButton* t_q_7;
	JoystickButton* t_h_8;
	JoystickButton* t_th_9;
	JoystickButton* t_full_10;
	
	JoystickButton* Track_Toggle;
	JoystickButton* t_tur_3;
	
public:
	Joystick* left;
	Joystick* right;
	Joystick* third;
	
	OI(Print *pr, Init *i);
	float GetLeftY();
	float GetRightY();
	float GetThirdY();
	float GetThirdZ();
	bool GetTurretTrigger();
};

#endif
