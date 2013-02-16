#include "Altitude.h"
#include "../Commands/AltMotors.h"

Altitude::Altitude(Init *i, Print *pr) : Subsystem("Altitude") {
	init = i;
	print = pr;
}

void Altitude::InitDefaultCommand()
{
	SetDefaultCommand(new AltMotors(print, init));
}

void Altitude::Move(float speed)
{
	init->alt->Set(speed);
}
