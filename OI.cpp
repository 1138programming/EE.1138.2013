#include "OI.h"
#include "Commands/PIDControl.h"
#include "Commands/Speed.h"
#include "Commands/ShooterON.h"
#include "Commands/ShooterOFF.h"

OI::OI(Print *p, Init *i) {
	print = p;
	init = i;
	
	left = new Joystick(JLEFT);
	right = new Joystick(JRIGHT);
	third = new Joystick(JTHIRD);
	
	ltrigger = new JoystickButton(left, 1);
	rtrigger = new JoystickButton(right, 1);
	
	r_q_7 = new JoystickButton(right, 7);
	r_h_8 = new JoystickButton(right, 8);
	r_th_9 = new JoystickButton(right, 9);
	r_full_10 = new JoystickButton(right, 10);
	l_q_7 = new JoystickButton(left, 7);
	l_h_8 = new JoystickButton(left, 8);
	l_th_9 = new JoystickButton(left, 9);
	l_full_10 = new JoystickButton(left, 10);
	
	
	/*r_q_7->WhenPressed(new Speed(S25, 'r'));
	r_h_8->WhenPressed(new Speed(S50, 'r'));
	r_th_9->WhenPressed(new Speed(S75, 'r'));
	r_full_10->WhenPressed(new Speed(S10, 'r'));
	l_q_7->WhenPressed(new Speed(S25, 'l'));
	l_h_8->WhenPressed(new Speed(S50, 'l'));
	l_th_9->WhenPressed(new Speed(S75, 'l'));
	l_full_10->WhenPressed(new Speed(S10, 'l'));
	
	ltrigger->WhileHeld(new ShooterON(print, init, 'l'));
	ltrigger->WhenReleased(new ShooterOFF(print, init, 'l'));
	rtrigger->WhileHeld(new ShooterON(print, init, 'r'));
	rtrigger->WhenReleased(new ShooterOFF(print, init, 'r'));*/
	
}

float OI::GetLeftY()
{
	return left->GetY();
}

float OI::GetRightY()
{
	return right->GetY();
}

float OI::GetThirdY()
{
	return third->GetY();
}

float OI::GetThirdZ()
{
	return third->GetZ();
}
