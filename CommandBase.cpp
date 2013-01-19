#include "CommandBase.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Init* CommandBase::initialize = NULL;
DriveTrain* CommandBase::drivetrain = NULL;
OI* CommandBase::oi = NULL;
Print* CommandBase::print = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	print = new Print();
	
	initialize = new Init();
	drivetrain = new DriveTrain(initialize, print);
	oi = new OI();	
}
