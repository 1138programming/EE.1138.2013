#include "StartMotors.h"

StartMotors::StartMotors(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	//Requires(turret);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void StartMotors::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StartMotors::Execute() {
	//turret->Turn(oi->GetThirdZ());
}

// Make this return true when this Command no longer needs to run execute()
bool StartMotors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void StartMotors::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StartMotors::Interrupted() {
}
