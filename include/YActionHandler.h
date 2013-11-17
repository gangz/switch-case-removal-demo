#ifndef YACTIONHANDLER_H_
#define YACTIONHANDLER_H_

#include "ActionHandler.h"

class YActionHandler: public ActionHandler {
public:
	YActionHandler();
	virtual ~YActionHandler();
	virtual int actionId();
	virtual void doAction(BYTE*, OutputData*);
};

#endif /* YACTIONHANDLER_H_ */
