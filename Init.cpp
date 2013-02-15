#include "Init.h"

Init::Init()
{
	leftJag_1 = new Victor(LEFT1);
	leftJag_2 = new Victor(LEFT2);
	rightJag_1 = new Victor(RIGHT1);
	rightJag_2 = new Victor(RIGHT2);
	
	vex_turr = new Victor(VTURR);
	alt = new Victor(ALT);
	
	/* Accelerometers uneeded
	acc_1 = new DigitalOutput(ACC_1);
	acc_2 = new DigitalOutput(ACC_2);
	acc_3 = new DigitalInput(ACC_3);
	acc_4 = new DigitalOutput(ACC_4);
	*/
	
	drive = new RobotDrive(leftJag_1, leftJag_2);
	drive->SetSafetyEnabled(false);
	
	d_encoder = new Encoder(7, 8);
	//vex_enc = new Encoder(1, 2);
	
	d_encoder->Reset();
	d_encoder->Start();
	//vex_enc->Reset();
	//vex_enc->Start();
	
	//gyro = new Gyro(G_RATE);
	//acc = new ADXL345_SPI(acc_1, acc_2, acc_3, acc_4);
	
	table = NetworkTable::GetTable("datatable");
	table->PutNumber("x", 0);
	
	isTargeting = true;
	
	// Vex 393

	DigitalModule* module = DigitalModule::GetInstance(1);

	if (module) {
		vex_393 = module->GetI2C(0x60);

		//vex_393->Write(0x4A, 0); // write zero to the address
	} else
		printf("Cannot find module");
}
