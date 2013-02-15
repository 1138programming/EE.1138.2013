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
	char y;
public:
	ShooterOFF(Print *pr, Init *i, char x);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
