#ifndef X_ACTION_HANDLER_H_
#define X_ACTION_HANDLER_H_

#include "ActionHandler.h"

class XActionHandler: public ActionHandler{
public:
	XActionHandler();
	virtual ~XActionHandler();
	virtual int actionId();
	virtual void doAction(BYTE*, OutputData*);
};

#endif /* X_ACTION_HANDLER_H_ */
