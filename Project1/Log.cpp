#include "Log.h"

#include <iostream>

using namespace std;

namespace logger {

	void LOGI(string tag, char msg[]) {
		char tagn[100];
		strcpy_s(tagn,tag.c_str());
		strncat_s(tagn, msg, strlen(msg) + 1);
		cout << tagn << endl;
	}

	void LOGV(string tag, char msg[]){
		char tagn[100];
		strcpy_s(tagn, tag.c_str());
		strncat_s(tagn, msg, strlen(msg) + 1);
		cout << tagn << endl;
	}

	void LOGD(string tag, char msg[]) {
		char tagn[100];
		strcpy_s(tagn, tag.c_str());
		strncat_s(tagn, msg, strlen(msg) + 1);
		cout << tagn << endl;
	}

	void LOGE(string tag, char msg[]) {
		char tagn[100];
		strcpy_s(tagn, tag.c_str());
		strncat_s(tagn, msg, strlen(msg) + 1);
		cout << tagn << endl;
	}
}
