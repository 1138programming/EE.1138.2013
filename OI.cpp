#include "OI.h"

OI::OI() {
	left = new Joystick(JLEFT);
	right = new Joystick(JRIGHT);
}

float OI::GetLeftY()
{
	if(left->GetY() < 0.4 && left->GetY() > 0.01)
		return left->GetY() + 0.4;
	else if(left->GetY() > -0.4 && left->GetY() < -0.01)
		return left->GetY() - 0.4;
	else
		return left->GetY();
}

float OI::GetRightY()
{
	if(right->GetY() < 0.4 && right->GetY() > 0.02)
		return right->GetY() + 0.4;
	else if(right->GetY() > -0.4 && right->GetY() < -0.02)
		return right->GetY() - 0.4;
	else
		return right->GetY();
}
