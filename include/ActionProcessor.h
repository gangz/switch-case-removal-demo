#ifndef ACTION_PROCESSOR_H_
#define ACTION_PROCESSOR_H_

#include "ActionHandler.h"
#include <vector>
class OutputData;
class InputData;

class ActionProcessor{
public:
	~ActionProcessor();
	void process(InputData* msg, OutputData* output);
	void registerActionHandler(ActionHandler* handler);

private:
	void unpackAir();
	void unpackSpecialDot();
	typedef std::vector<ActionHandler*> ActionhandlerList;
	typedef ActionhandlerList::iterator ActionHandlerIter;
	ActionhandlerList handlers;
};


#endif /* ACTION_PROCESSOR_H_ */
