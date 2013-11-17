#ifndef ACTION_HANDLER_H_
#define ACTION_HANDLER_H_

#include "DataDefinition.h"

class ActionHandler{
public:
	virtual ~ActionHandler(){};
	virtual int actionId() =0;
	virtual void doAction(BYTE* data, OutputData* message)=0;
};

#endif /* ACTION_HANDLER_H_ */
