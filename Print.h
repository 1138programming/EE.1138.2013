#ifndef PRINT_H
#define PRINT_H
#include "WPILib.h"

class Print
{
public:
	Print();
	void Write(string text, int line);
	void Write(string text, float num, int line);
	void Update(void);
	void Clear(void);
	void Check(void);
	int countn;
	DriverStationLCD *dsLCD;
};

#endif
