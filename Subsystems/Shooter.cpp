#include "Shooter.h"

Shooter::Shooter(Init *i, Print *pr) :
	Subsystem("Shooter") {
	init = i;
	print = pr;
	speed = 1.00;
}

void Shooter::Set() {
	init->alt->Set(speed);
}

void Shooter::Off() {
	init->alt->Set(0.00);
}

void Shooter::InitDefaultCommand() {
}

void Shooter::Set_Speed(float given_speed) {
	speed = given_speed;
}
