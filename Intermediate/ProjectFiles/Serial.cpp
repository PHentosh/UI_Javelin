#include "Serial.h"

SerialPort::SerialPort(char* portName)
{
	errors = 0;
	status = { 0 };
	connected = false;

	handleToCom = CreateFileA(static_cast<LPCSTR>(portName), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	DWORD errMsg = GetLastError();

	if (errMsg == 2) {
		printf("Plug device");
	}
	else if (errMsg == 5) {
		printf("Other is using device");
	}
	else if (errMsg == 0) {
		DCB dcbSerParams = { 0 };
		if (!GetCommState(handleToCom, &dcbSerParams)) {
			printf("Filed fo get params");
		}
		else {
			dcbSerParams.BaudRate = CBR_9600;
			dcbSerParams.ByteSize = 8;
			dcbSerParams.StopBits = ONESTOPBIT;
			dcbSerParams.Parity = NOPARITY;
			dcbSerParams.fDtrControl = DTR_CONTROL_ENABLE;

			if (!SetCommState(handleToCom, &dcbSerParams)) {
				printf("Filed fo set params");
			}
			else {
				connected = true;
				PurgeComm(handleToCom, PURGE_RXCLEAR | PURGE_TXCLEAR);
				Sleep(WAIT_TIME);
			}


		}
	
	}
}

SerialPort::~SerialPort()
{
	if (connected == true) {
		connected = false;
		CloseHandle(handleToCom);
	}
}

int SerialPort::ReadSerialPort(char* buffer, unsigned int buf_size)
{
	DWORD bytesRead = 0;
	unsigned int toRead = 0;
	ClearCommError(handleToCom, &errors, &status);

	if (status.cbInQue > 0) {
		if (status.cbInQue > buf_size){
			toRead = buf_size;
		}
		else {
			toRead = status.cbInQue;
		}
	}
	if (ReadFile(handleToCom, buffer, toRead, &bytesRead, NULL)){
		return bytesRead;
	}

	return 0;
}

bool SerialPort::isConected()
{
	return connected;
}
