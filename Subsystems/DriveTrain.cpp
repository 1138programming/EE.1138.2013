#include "DriveTrain.h"
#include "../Commands/DriveWithJoysticks.h"

DriveTrain::DriveTrain(Init *i, Print *pr) : Subsystem("DriveTrain") {
	init = i;
	print = pr;
}
    
void DriveTrain::TankDrive(double left, double right, double third)
{
	init->drive->TankDrive(left, right);
	//init->vex_turr->Set(left); //one of the vex motors
	//init->leftJag_1->Set(left);
	//init->leftJag_2->Set(right);
	//print->Write("", float(init->vex_enc->GetDistance()), 1);
	//printf("...%f\n", left);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoysticks(print, init));
}

void DriveTrain::SetEncoderMotor(double speed)
{
	init->leftJag_1->Set(speed);
}
