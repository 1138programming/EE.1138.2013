#ifndef IEC_H
#define IEC_H

#include "WPILib.h"
#include "bitset"

class IEC {
//private:
//	I2C* vex_393;
public:
	
	IEC();
	
	void Init_I2C();

	int Get_Data_I2C();
	
	I2C* vex_393;
};

#endif
