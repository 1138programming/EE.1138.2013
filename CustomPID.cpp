#include "CustomPID.h"

/*** Constructor initializes all variables ***/
CustomPID::CustomPID()
{
	SetPoint = 0.00;
	Tolerance = 0.00;
	MaxSpeed = 1.00;
	MinSpeed = -1.00;
	onTarget = false;
}


/*** Calculates needed speed based on distance from target and tolerance ***/
float CustomPID::GetPIDSpeed(float _SetPoint, float _Tolerance, float _MaxSpeed, float _MinSpeed)
{
	SetPoint = _SetPoint;
	Tolerance = _Tolerance;
	MaxSpeed = _MaxSpeed;
	MinSpeed = _MinSpeed;
	return GetSpeed();
}

float CustomPID::GetPIDSpeed(float _SetPoint, float _Tolerance)
{
	SetPoint = _SetPoint;
	Tolerance = _Tolerance;
	MaxSpeed = 1.00;
	MinSpeed = -1.00;
	return GetSpeed();
}

float CustomPID::GetSpeed()
{
	return 0;
}


/*** Functions for getting current values ***
 *** Used for debugging purposes ***/ 
float CustomPID::GetMaxSpeed(){	return MaxSpeed;	}

float CustomPID::GetMinSpeed(){	return MinSpeed;	}

float CustomPID::GetTolerance(){	return Tolerance;	}

float CustomPID::GetSetPoint(){	return SetPoint;	}

