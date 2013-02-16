#include "ShooterON.h"

ShooterON::ShooterON(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	// Requires(shooter);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void ShooterON::Initialize() {
	if(init->isTargeting)
	{
		// read and track
		return;
	}
	shooter->Set();
}

// Called repeatedly when this Command is scheduled to run
void ShooterON::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterON::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ShooterON::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterON::Interrupted() {
}
