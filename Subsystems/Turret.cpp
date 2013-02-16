#include "Turret.h"
#include "../Commands/TurnTurret.h"

Turret::Turret(Init *i, Print *pr) : Subsystem("Turret") {
	init = i;
	print = pr;
}

void Turret::InitDefaultCommand()
{
	SetDefaultCommand(new TurnTurret(print, init));
}

void Turret::Turn(float speed)
{
	init->vex_turr->Set(speed);
}
