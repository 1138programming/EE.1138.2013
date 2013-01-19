#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
#include "../Init.h"
#include "../Robotmap.h"
#include "../Print.h"


class DriveTrain: public PIDSubsystem {
private:
	static const double DRIVEMOTORS = 1000.00;
	RobotDrive *drive;
	Victor *left;
	Victor *right;
	Init *init;
	Print *print;
public:
	DriveTrain(Init *i, Print *pr);
	void InitDefaultCommand();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void TankDrive(double left, double right);
};

#endif
