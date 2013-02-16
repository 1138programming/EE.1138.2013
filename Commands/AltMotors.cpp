#include "AltMotors.h"

AltMotors::AltMotors(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	Requires(altitude);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void AltMotors::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AltMotors::Execute() {
	if(init->isTargeting)
	{
		// read and track
		return;
	}
	altitude->Move(- (oi->GetThirdY()));
	printf("Encoder:   %f\n", init->e_alt->GetDistance());
}

// Make this return true when this Command no longer needs to run execute()
bool AltMotors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AltMotors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AltMotors::Interrupted() {
}
