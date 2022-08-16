#include <iostream>
#include <fstream>
#include <dirent.h>
#include "log.h"

using namespace std;
using namespace logger;

#define TAG "MYTest"
#define ERR "MYTest-ERR"

int main(){
	cout << "hello" << endl;

	char data[120];
	ifstream infile;
	ofstream outfile;
	infile.open("E:/image/log.txt");
	cout << "Reading from the file" << endl;
	infile >> data;
	outfile.open("E:/image/out.txt");
	outfile << "go to bed";
	outfile.close();
	// 在屏幕上写入数据
	cout << data << endl;
	infile.close();

	char path[] = "E:/cfiles";
	DIR* dir = opendir(path);

	if (!dir) {
		LOGE(ERR,path);
	}
	else
	{
		LOGD(TAG, path);
	}
	struct dirent* entry;
	while ((entry = readdir(dir))) {
		LOGD(TAG, entry->d_name);
	}
	closedir(dir);
	return 0;
}


