#ifndef DATA_DEFINITION_H_
#define DATA_DEFINITION_H_

typedef unsigned char BYTE;

struct OutputData{
	int id;
	char name[20];
};

struct InputData{
	int actionId;
	BYTE data[20];
};

#endif /* DATA_DEFINITION_H_ */
