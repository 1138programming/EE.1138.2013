#ifndef CUSTOMPID_H
#define CUSTOMPID_H

class CustomPID
{
public:
	CustomPID();
	float GetPIDSpeed(float _SetPoint, float _Tolerance, float _MaxSpeed, float _MinSpeed);
	float GetPIDSpeed(float _SetPoint, float _Tolerance);
	
	float GetSetPoint();
	float GetTolerance();
	float GetMaxSpeed();
	float GetMinSpeed();
	
private:
	float GetDistanceFromSetPoint();
	float GetSpeed();
	
	float SetPoint;
	float Tolerance; //always positive
	float MaxSpeed; //not to change unless required for motors
	float MinSpeed;//not to change unless required for motors
	
	float ReturnSpeed;
	bool onTarget;
};

#endif
