#include "Speed.h"

Speed::Speed(float given) {
	// Use requires() here to declare subsystem dependencies
	// Requires(elevator);
	speed = given;
}

// Called just before this Command runs the first time
void Speed::Initialize() {
	shooter->Set_Speed(speed);
}

// Called repeatedly when this Command is scheduled to run
void Speed::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool Speed::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Speed::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Speed::Interrupted() {
}
