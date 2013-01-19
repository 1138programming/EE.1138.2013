#include "Print.h"

Print::Print()
{
	dsLCD = DriverStationLCD::GetInstance();
	countn = 0;//usually 2
}

void Print::Write(string text, int line)
{
	Check();
	char *write = new char[text.size() + 1];
	write[text.size()] = 0;
	memcpy(write,text.c_str(),text.size());
	if(line == 0)
	{
		dsLCD->PrintfLine((DriverStationLCD::Line) countn, write);
		countn++;
	}
	else
		dsLCD->PrintfLine((DriverStationLCD::Line) line, write);
	Update();
}

void Print::Write(string text, float num, int line)
{
	Check();
	char *flo = new char[text.size()+1];
	char *write = new char[text.size() + 1];
	write[text.size()] = 0;
	memcpy(write,text.c_str(),text.size());
	sprintf(flo,"%f", num);
	if(line == 0)
	{
		dsLCD->PrintfLine((DriverStationLCD::Line) countn, flo);
		countn++;
	}
	else
		dsLCD->PrintfLine((DriverStationLCD::Line) 0, flo);
	Update();
}

void Print::Update(void)
{
	dsLCD->UpdateLCD();
}

void Print::Clear(void)
{
	int temp = 0;//usually 2
	while(temp != 7)
	{
		dsLCD->PrintfLine((DriverStationLCD::Line) temp, "");
		temp++;
	}
	dsLCD->PrintfLine((DriverStationLCD::Line) 0, "");
}

void Print::Check(void)
{
	if(countn == 5)
	{
		countn = 0;  //usually 2
		int temp = 0;  //usually 2
		while(temp != 6)
		{
			dsLCD->PrintfLine((DriverStationLCD::Line) temp, "");
			temp++;
		}
	}
}
