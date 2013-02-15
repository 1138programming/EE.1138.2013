#ifndef EAGLES_H
#define EAGLES_H

#include "Robotmap.h"
#include "WPILib.h"
#include "CommandBase.h"
#include "Print.h"
#include "Init.h"

class Eagles : public IterativeRobot
{
private:
	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void TestPeriodic();
	
	LiveWindow *lw;
	Init *init;
	Print *print;
};
#endif
