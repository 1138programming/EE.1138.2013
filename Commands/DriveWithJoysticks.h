#ifndef DRIVEWITHJOYSTICKS_H_
#define DRIVEWITHJOYSTICKS_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class DriveWithJoysticks: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	DriveWithJoysticks(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
