#include "OI.h"
#include "Commands/PIDControl.h"
#include "Commands/Speed.h"
#include "Commands/ShooterON.h"
#include "Commands/ShooterOFF.h"
#include "Commands/StartMotors.h"
#include "Commands/StopMotors.h"
#include "Commands/ToggleTracking.h"
#include "Commands/TurnTurret.h"

OI::OI(Print *p, Init *i) {
	print = p;
	init = i;
	
	left = new Joystick(JLEFT);
	right = new Joystick(JRIGHT);
	third = new Joystick(JTHIRD);
	
	ltrigger = new JoystickButton(left, 1);
	rtrigger = new JoystickButton(right, 1);
	
	t_q_7 = new JoystickButton(third, 7);
	t_h_8 = new JoystickButton(third, 8);
	t_th_9 = new JoystickButton(third, 9);
	t_full_10 = new JoystickButton(third, 10);
	
	Track_Toggle = new JoystickButton(third, 2);
	t_tur_3 = new JoystickButton(third, 3);
	
	
	t_q_7->WhenPressed(new Speed(S25));
	t_h_8->WhenPressed(new Speed(S50));
	t_th_9->WhenPressed(new Speed(S75));
	t_full_10->WhenPressed(new Speed(S10));
	
	Track_Toggle->WhenPressed(new ToggleTracking(print, init));
	t_tur_3->WhileHeld(new TurnTurret(print, init));
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

bool OI::GetTurretTrigger()
{
	return t_tur_3->Get();
}
