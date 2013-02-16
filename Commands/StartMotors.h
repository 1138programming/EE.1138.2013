#ifndef STARTMOTORS_H_
#define STARTMOTORS_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class StartMotors: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	StartMotors(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
