#include "Init.h"

Init::Init()
{
	leftJag = new Victor(MLEFT);
	rightJag = new Victor(MRIGHT);
	
	acc_1 = new DigitalOutput(ACC_1);
	acc_2 = new DigitalOutput(ACC_2);
	acc_3 = new DigitalInput(ACC_3);
	acc_4 = new DigitalOutput(ACC_4);
	
	drive = new RobotDrive(leftJag, rightJag);
	
	encoder = new Encoder(5, 6);
	encoder->Reset();
	encoder->Start();
	
	gyro = new Gyro(G_RATE);
	acc = new ADXL345_SPI(acc_1, acc_2, acc_3, acc_4);
	grid = new Position_Tracking();
}
