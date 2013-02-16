#include "Init.h"

Init::Init()
{
	leftJag = new Victor(LEFT);
	rightJag = new Victor(RIGHT);
	
	vex_turr = new Victor(VTURR);
	alt = new Victor(ALT);
			
	drive = new RobotDrive(leftJag, rightJag);
	drive->SetSafetyEnabled(false);
	
	e_alt = new Encoder(E_ALT1, E_ALT2);
	vex_iec = new IEC();
	
	e_alt->Reset();
	e_alt->Start();
	
	table = NetworkTable::GetTable("datatable");
	table->PutNumber("x", 0);
	
	isTargeting = false;
	
}
