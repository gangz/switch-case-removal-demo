/*
 * MessageManager.h
 *
 *  Created on: 2013年11月15日
 *      Author: gangz
 */

#ifndef MESSAGEMANAGER_H_
#define MESSAGEMANAGER_H_

#include "MessageHandler.h"
#include <vector>
class OutputMessage;
class InputMessage;

class MessageManager{
public:
	void unpackMessage(InputMessage* msg, OutputMessage* output);
	void registerMessageHandler(MessageHander& handler);

private:
	void unpackAir();
	void unpackSpecialDot();
	std::vector<MessageHander*> handlers;
};


#endif /* MESSAGEMANAGER_H_ */
