#ifndef PIDCONTROL_H_
#define PIDCONTROL_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class PIDControl: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	PIDControl(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
