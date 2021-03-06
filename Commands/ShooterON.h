#ifndef SHOOTER_ON_H_
#define SHOOTER_ON_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class ShooterON: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	ShooterON(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
