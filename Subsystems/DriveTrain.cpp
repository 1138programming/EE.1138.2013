#include "DriveTrain.h"
#include "../Commands/DriveWithJoysticks.h"

DriveTrain::DriveTrain(Init *i, Print *pr) : PIDSubsystem("DriveTrain", 3.5, 0.4, 0.1) {
	GetPIDController()->SetContinuous(false);
	init = i;
	print = pr;
	init->drive->SetSafetyEnabled(false);
	SetAbsoluteTolerance(.05);
	SetSetpoint(DRIVEMOTORS);
	if(!A_DEBUG)
		Enable();
}
    
void DriveTrain::TankDrive(double left, double right)
{
	init->drive->TankDrive(left, right);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoysticks(print, init));
}

double DriveTrain::ReturnPIDInput()
{
	if((init->encoder->GetDistance() >= (DRIVEMOTORS - 10)) && (init->encoder->GetDistance() <= (DRIVEMOTORS + 10)))
	{
		Disable();
		SetCurrentCommand(new DriveWithJoysticks(print, init));
		return 0;
	}
	return init->encoder->GetDistance();
}

void DriveTrain::UsePIDOutput(double output)
{
	init->rightJag->Set(-output);
	init->leftJag->Set(output);
}
