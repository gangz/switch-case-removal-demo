
#include "ActionProcessor.h"
#include "DataDefinition.h"

#include <vector>

void ActionProcessor::registerActionHandler(ActionHandler* handler){
	handlers.push_back(handler);
}

ActionProcessor::~ActionProcessor(){
	for (ActionHandlerIter iter = handlers.begin();
			iter!=handlers.end();
			iter++){
		delete *iter;
	}
}
void ActionProcessor::process(InputData* data, OutputData* output){
	for (ActionHandlerIter iter = handlers.begin();
		iter!=handlers.end();
		iter++){
		if (data->actionId == (*iter)->actionId()){
			(*iter)->doAction((BYTE*)(data->data),output);
		}
	}
};


