#include "Module.h"
#include "XActionHandler.h"
#include "YActionHandler.h"

void Module::init() {
	_actionProcessor.registerActionHandler(new XActionHandler());
	_actionProcessor.registerActionHandler(new YActionHandler());

}

