#include "Eagles.h"

void Eagles::RobotInit() {
	CommandBase::init();
	GetWatchdog().SetEnabled(false);
	lw = LiveWindow::GetInstance();
	AxisCamera &camera = AxisCamera::GetInstance();
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
}

void Eagles::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Eagles::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Eagles);

