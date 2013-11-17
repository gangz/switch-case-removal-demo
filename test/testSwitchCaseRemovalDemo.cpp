#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "DataDefinition.h"
#include "Module.h"

TEST_GROUP(SwitchCaseRemovalDemo){

};

TEST(SwitchCaseRemovalDemo,the_only_one_test){
	InputData input;
	input.actionId = 100;

	OutputData output;
	Module module;
	module.init();
	module.actionProcessor().process(&input,&output);

}

