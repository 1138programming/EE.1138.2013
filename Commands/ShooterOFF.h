#ifndef SHOOTER_OFF_H_
#define SHOOTER_OFF_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class ShooterOFF: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	ShooterOFF(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
