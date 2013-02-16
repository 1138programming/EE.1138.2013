#ifndef ALTMOTORS_H_
#define ALTMOTORS_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class AltMotors: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	AltMotors(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
