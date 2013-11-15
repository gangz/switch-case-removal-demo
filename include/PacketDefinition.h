/*
 * PacketDefinition.h
 *
 *  Created on: 2013年11月15日
 *      Author: gangz
 */

#ifndef PACKETDEFINITION_H_
#define PACKETDEFINITION_H_

typedef unsigned char BYTE;

struct OutputMessage{
	int id;
	char name[20];
	char* messageStruct;
};

struct InputMessage{
	BYTE source;
	int messageType;
	int messageNo;
	BYTE data[20];
};

struct Air{
	int bookNumber;
	double price;
	int height;
	int width;
};

struct SpecialDot{
	int id;
	int type;
	double centerLongitude;
	double centerLatitude;
	int length;
	int width;
	int direction;
};
#endif /* PACKETDEFINITION_H_ */
