#include "ShooterOFF.h"

ShooterOFF::ShooterOFF(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	// Requires(shooter);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void ShooterOFF::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ShooterOFF::Execute() {
	shooter->Off();
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterOFF::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ShooterOFF::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterOFF::Interrupted() {
}
