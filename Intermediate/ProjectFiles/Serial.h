#pragma once

#include "windows.h"
#include "stdio.h"
#include "stdlib.h"

#define WAIT_TIME 2500
#define INPUT_BITES 8

class SerialPort 
{
private:
	HANDLE handleToCom;
	bool connected;
	COMSTAT status;
	DWORD errors;
public:
	SerialPort(char * portName);
	~SerialPort();

	int ReadSerialPort(char* buffer, unsigned int buf_size);
	bool isConected();
};