#ifndef INIT_H
#define INIT_H

#include "WPILib.h"
#include "Robotmap.h"
#include "I2CEncoder/IEC.h"

class Init
{
public:
	Init();
	
	RobotDrive *drive;
	
	Victor* leftJag;
	Victor* rightJag;
	Victor* alt;
	Victor* vex_turr;
	
	IEC* vex_iec;
	
	Encoder* e_alt;
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
