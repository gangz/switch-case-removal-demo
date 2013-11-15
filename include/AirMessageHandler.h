/*
 * AirMessageHandler.h
 *
 *  Created on: 2013年11月15日
 *      Author: gangz
 */

#ifndef AIRMESSAGEHANDLER_H_
#define AIRMESSAGEHANDLER_H_
#include "MessageHandler.h"

class AirMessageHander: public MessageHander{
public:
	virtual int messageNo();
	virtual void unpack();
};

#endif /* AIRMESSAGEHANDLER_H_ */
