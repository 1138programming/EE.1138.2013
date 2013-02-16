#include "ToggleTracking.h"

ToggleTracking::ToggleTracking(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	//Requires(turret);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void ToggleTracking::Initialize() {
	init->isTargeting = (init->isTargeting) ? (init->isTargeting = false) : 
			(init->isTargeting = true);
	(init->isTargeting) ? (print->Write("ENABLED", 1)) : (print->Write("DISABLED", 1));
}

// Called repeatedly when this Command is scheduled to run
void ToggleTracking::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleTracking::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleTracking::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleTracking::Interrupted() {
}
