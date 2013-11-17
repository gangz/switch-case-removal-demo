#ifndef MODULE_H_
#define MODULE_H_

#include "ActionProcessor.h"
class Module {
public:
	void init();
	ActionProcessor& actionProcessor(){return _actionProcessor;}
private:
	ActionProcessor _actionProcessor;
};

#endif /* MODULE_H_ */
