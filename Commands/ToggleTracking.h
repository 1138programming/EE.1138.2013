#ifndef TOGGLETRACKING_H_
#define TOGGLETRACKING_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class ToggleTracking: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	ToggleTracking(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
