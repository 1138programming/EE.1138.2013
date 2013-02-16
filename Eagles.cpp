#include "Eagles.h"

void Eagles::RobotInit() {
	init = new Init();
	print = new Print();
	
	CommandBase::init(init, print);
	GetWatchdog().SetEnabled(false);
	lw = LiveWindow::GetInstance();
	
	//AxisCamera &camera = AxisCamera::GetInstance();
}

void Eagles::AutonomousInit() { }

void Eagles::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Eagles::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// this line or comment it out.
	init->e_alt->Reset();
}

void Eagles::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Eagles::DisabledInit()
{
	printf("Disabled!\n");
	init->e_alt->Stop();
	init->isTargeting = false;
	init->drive->StopMotor();
}

void Eagles::DisabledPeriodic(){} // do nothing

void Eagles::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Eagles);

