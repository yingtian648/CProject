#include "log.h"

#include <iostream>

using namespace std;

MyLog::MyLog() {
	cout << "init MyLog" << endl;
}
MyLog::~MyLog(){
	cout << "init ~MyLog" << endl;
}

void MyLog::LOGD(char msg[]) {
	cout << "LOGD" << endl;
	char tagn[100];
	strncat_s(tagn, mtag, strlen(mtag) + 1);
	strncat_s(tagn, msg, strlen(msg) + 1);
	cout << tagn << endl;
}
void MyLog::setTag(const char* tag) {
	mtag = tag;
	cout << "setTag" << endl;
}

	


