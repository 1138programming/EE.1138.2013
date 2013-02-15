#ifndef TURRET_H
#define TURRET_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Init.h"
#include "../Robotmap.h"
#include "../Print.h"


class Turret: public Subsystem {
private:
	Init* init;
	Print* print;
public:
	Turret(Init *i, Print *pr);
	void InitDefaultCommand();
	void Turn(float speed);
};

#endif
