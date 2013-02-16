#ifndef STOPMOTORS_H_
#define STOPMOTORS_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class StopMotors: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	StopMotors(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
