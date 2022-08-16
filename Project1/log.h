#include <iostream>

#ifndef __LOGGER__
#define __LOGGER__

class MyLog{
public:
	MyLog();
	~MyLog();
	void LOGD(char msg[]);
	void setTag(const char* tag);

private:
	const char* mtag;
};

#endif