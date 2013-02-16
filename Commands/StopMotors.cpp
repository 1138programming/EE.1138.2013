#include "StopMotors.h"

StopMotors::StopMotors(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	//Requires(turret);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void StopMotors::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StopMotors::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool StopMotors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void StopMotors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopMotors::Interrupted() {
}
