#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "PacketDefinition.h"
#include "string.h"

#include "MessageManager.h"

#include "AirMessageHandler.h"
TEST_GROUP(PacketTypeA){

};

TEST(PacketTypeA,valid_packet){
	InputMessage msg;

	msg.messageType = 1;
	msg.messageNo = 201;    //id

	msg.source = 5;

	Air air;
	air.bookNumber = 1;
	air.height =2;
	air.width = 3;
	air.price = 0.0;

	memcpy(msg.data,(void*) &air, sizeof(Air));
	OutputMessage output;

	MessageManager manager;
	AirMessageHander airMessagehandler;
	manager.registerMessageHandler(airMessagehandler);
	manager.unpackMessage(&msg,&output);

	CHECK_EQUAL(1,output.id);
	STRCMP_EQUAL("abc",output.name);
}

