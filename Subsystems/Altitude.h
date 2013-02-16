#ifndef ALTITUDE_H_
#define ALTITUDE_H_
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Init.h"
#include "../Robotmap.h"
#include "../Print.h"


class Altitude: public Subsystem {
private:
	Init* init;
	Print* print;
public:
	Altitude(Init *i, Print *pr);
	void InitDefaultCommand();
	void Move(float speed);
};

#endif
