#ifndef __EPS_REERA_DIAG_H
#define __EPS_REERA_DIAG_H

#include "rayanmessage.h"
#include "Algorithm.h"

class EPS_Reera_Diag : public BaseAlgorithm
{
public:
	virtual bool InternalSwitchCase(CommandAdorner* Command);
	const static u16 Class_ID;
	EPS_Reera_Diag(void);
	~EPS_Reera_Diag(void);

	bool Configuration(CommandAdorner* Command);
  bool Diagnostic (CommandAdorner* Command);
  bool Date_Configuration(CommandAdorner* Command);
	bool Remote_Learning(CommandAdorner* Command);
	bool ResetOdometer(CommandAdorner* Command);

private:
	
};
#endif //__EPS_Reera_Diag_H
