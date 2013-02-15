#include "TurnTurret.h"

TurnTurret::TurnTurret(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	Requires(turret);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void TurnTurret::Initialize() {
	turret->Turn(oi->GetThirdY());
}

// Called repeatedly when this Command is scheduled to run
void TurnTurret::Execute() {
	turret->Turn(oi->GetThirdZ());
}

// Make this return true when this Command no longer needs to run execute()
bool TurnTurret::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TurnTurret::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnTurret::Interrupted() {
}
