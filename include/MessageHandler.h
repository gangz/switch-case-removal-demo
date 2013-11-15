/*
 * MessageHandler.h
 *
 *  Created on: 2013年11月15日
 *      Author: gangz
 */

#ifndef MESSAGEHANDLER_H_
#define MESSAGEHANDLER_H_


class MessageHander{
public:
	virtual int messageNo() =0;
	virtual void unpack()=0;
};

#endif /* MESSAGEHANDLER_H_ */
