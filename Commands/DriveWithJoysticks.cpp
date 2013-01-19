#include "DriveWithJoysticks.h"
#include "math.h"

DriveWithJoysticks::DriveWithJoysticks(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	Requires(drivetrain);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void DriveWithJoysticks::Initialize() {
	drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY());
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute() {
	drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY());
	if(A_DEBUG)
	{
		//printf("Accelerometer:   %f\n", init->acc->GetAcceleration(init->acc->kAxis_X));
		
		init->grid->Update_Postion(init->acc->GetAcceleration(init->acc->kAxis_X), 
				init->acc->GetAcceleration(init->acc->kAxis_Y), init->gyro->GetAngle(),
				init->encoder->GetDistance(), 0, oi->GetLeftY(), oi->GetRightY());
		printf("X:  %.1f     ", init->grid->getPosY());
		printf("Y:  %.1f\n", init->grid->getPosX());
		
		Wait(.01);
	}
	else
	{
		print->Write("", (float) init->encoder->GetDistance(), 1);
		printf("%f\n", init->encoder->GetDistance());
	}
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoysticks::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoysticks::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoysticks::Interrupted() {
}
