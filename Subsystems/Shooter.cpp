#include "Shooter.h"

Shooter::Shooter(Init *i, Print *pr) : Subsystem("Shooter") {
	init = i;
	print = pr;
	l_speed = 1.00;
	r_speed = 1.00;
}
    
void Shooter::Set()
{
	init->alt->Set(l_speed);
}

void Shooter::Off()
{
	init->alt->Set(0.00);
}

void Shooter::InitDefaultCommand()
{}

void Shooter::Set_Speed(float given_speed, char x)
{
	if(x == 'l')
	{
		l_speed = given_speed;
	}
	if(x == 'r')
	{
		r_speed = given_speed;
	}
}
