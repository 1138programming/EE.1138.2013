#include "DriveTrain.h"
#include "../Commands/DriveWithJoysticks.h"

DriveTrain::DriveTrain(Init *i, Print *pr) : Subsystem("DriveTrain") {
	init = i;
	print = pr;
	print->Write("DISABLED", 1);
}
    
void DriveTrain::TankDrive(double left, double right)
{
	init->drive->TankDrive(left, right);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoysticks(print, init));
}

void DriveTrain::SetEncoderMotor(double speed)
{
	init->leftJag->Set(speed);
}
