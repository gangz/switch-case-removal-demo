/*
 * MessageManager.cpp
 *
 *  Created on: 2013年11月15日
 *      Author: gangz
 */
#include "MessageManager.h"
#include "PacketDefinition.h"

#include <vector>

void MessageManager::registerMessageHandler(MessageHander& handler){
	handlers.push_back(&handler);
}

void MessageManager::unpackMessage(InputMessage* msg, OutputMessage* output){
	if (msg->messageType == 1){
		for (std::vector<MessageHander*>::iterator iter = handlers.begin();
			iter!=handlers.end();iter++){
				if (msg->messageNo == (*iter)->messageNo()){
					(*iter)->unpack();
				}
			}
	}
};

void MessageManager::unpackAir(){

}

void MessageManager::unpackSpecialDot(){

}

