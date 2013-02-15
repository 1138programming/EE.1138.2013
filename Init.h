#ifndef INIT_H
#define INIT_H

#include "WPILib.h"
#include "Robotmap.h"

class Init
{
public:
	Init();
	
	RobotDrive *drive;
	
	Victor* leftJag_1;
	Victor* leftJag_2;
	Victor* rightJag_1;
	Victor* rightJag_2;
	Victor* alt;
	Victor* vex_turr;
	
	I2C* vex_393;
	
	Encoder* d_encoder;
	Encoder* vex_enc;
	
	Gyro* gyro;
	ADXL345_SPI* acc;
	
	DigitalOutput* acc_1;
	DigitalOutput* acc_2;
	DigitalInput* acc_3;
	DigitalOutput* acc_4;
	
	NetworkTable* table;
	
	double x;
	bool isTargeting;
	
};
#endif
