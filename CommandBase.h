#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Scheduler.h"
#include "Commands/Command.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Turret.h"
#include "Subsystems/Altitude.h"
#include "OI.h"
#include "Init.h"
#include "Print.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init(Init* init, Print* pr);
	// Create a single static instance of all of your subsystems
	static Init* initialize;
	static DriveTrain* drivetrain;
	static OI* oi;
	static Print* print;
	static Shooter* shooter;
	static Turret* turret;
	static Altitude* altitude;
};

#endif
