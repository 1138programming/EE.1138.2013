#ifndef TURNTURRET_H_
#define TURNTURRET_H_

#include "../CommandBase.h"
#include "../Print.h"
#include "../Init.h"

class TurnTurret: public CommandBase 
{
private:
	Print *print;
	Init *init;
public:
	TurnTurret(Print *pr, Init *i);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
