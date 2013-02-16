#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Init.h"
#include "../Robotmap.h"
#include "../Print.h"


class DriveTrain: public Subsystem {
private:
	static const double DRIVEMOTORS = 1000.00;
	Init* init;
	Print* print;
	double _speed;
public:
	DriveTrain(Init *i, Print *pr);
	void InitDefaultCommand();
	void TankDrive(double left, double right);
	void SetEncoderMotor(double speed);
};

#endif
