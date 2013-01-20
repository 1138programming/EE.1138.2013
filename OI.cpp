#include "OI.h"

OI::OI() {
	left = new Joystick(JLEFT);
	right = new Joystick(JRIGHT);
}

float OI::GetLeftY()
{
	return left->GetY();
}

float OI::GetRightY()
{
	return right->GetY();
}
