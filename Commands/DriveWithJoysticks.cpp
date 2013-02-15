#include "DriveWithJoysticks.h"
#include "math.h"

DriveWithJoysticks::DriveWithJoysticks(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	Requires(drivetrain);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void DriveWithJoysticks::Initialize() {
	//drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY(), oi->GetThirdY());
	//init->vex_turr->Set(init->table->GetNumber("x"));
	/*
	 iec = new IEC(init);
	 
	 iec->Init_I2C();
	 */
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute() {
	//drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY(), oi->GetThirdY());
//	init->vex_turr->Set(init->table->GetNumber("x"));
	
	init->vex_turr->Set(1.0);

	//printf("INIT:\n");

	//iec->Get_Data_I2C();

	int data = 0;

//	UINT8 buffer;

	if (init->vex_393) {
		/*init->vex_393->Read(0x41, sizeof(buffer), &buffer);

		printf("1: %i\n", buffer);
		
		data |= ((long) buffer);

		init->vex_393->Read(0x40, sizeof(buffer), &buffer);

		printf("2: %i\n", buffer);
		
		data |= ((long) buffer) << 8;

		init->vex_393->Read(0x43, sizeof(buffer), &buffer);
		
		printf("3: %i\n", buffer);

		data |= ((long) buffer) << 16;

		init->vex_393->Read(0x42, sizeof(buffer), &buffer);
		
		printf("4: %i\n", buffer);

		data |= ((long) buffer) << 24;*/
		
		char d_buffer[4]; // read the four bytes
		
		init->vex_393->Read(0x40, 4, (UINT8*)&d_buffer);
		
		data |= ((int) d_buffer[1]);
		
		data |= ((int) d_buffer[0]) << 8;
		
		data |= ((int) d_buffer[3]) << 16;
		
		data |= ((int) d_buffer[2]) << 24;
		
		printf("Data: %i\n", data);
		
	} else
		printf("FAIL\n");

//	printf("%i\n", (int)data);

	//printf("TINIT:\n");
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoysticks::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoysticks::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoysticks::Interrupted() {
}
