#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Init.h"
#include "../Robotmap.h"
#include "../Print.h"


class Shooter: public Subsystem {
private:
	Init* init;
	Print* print;
public:
	Shooter(Init *i, Print *pr);
	void InitDefaultCommand();
	void Set();
	void Off();
	void Set_Speed(float given_speed, char x);
	double l_speed;
	double r_speed;
};

#endif
