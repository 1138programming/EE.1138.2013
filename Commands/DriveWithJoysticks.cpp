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
	//init->vex_turr->Set(init->table->GetNumber("x"));
	/*
	 iec = new IEC(init);
	 
	 iec->Init_I2C();
	 */
	
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute() {
	drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY());
//	init->vex_turr->Set(init->table->GetNumber("x"));

	//init->vex_iec->Get_Data_I2C();
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
