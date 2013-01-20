#ifndef INIT_H
#define INIT_H

#include "WPILib.h"
#include "Robotmap.h"

class Init
{
public:
	Init();
	
	RobotDrive *drive;
	
	Victor *leftJag;
	Victor *rightJag;
	
	Encoder *encoder;
	
	Gyro *gyro;
	ADXL345_SPI *acc;
	
	DigitalOutput *acc_1;
	DigitalOutput *acc_2;
	DigitalInput *acc_3;
	DigitalOutput *acc_4;
	
};
#endif
