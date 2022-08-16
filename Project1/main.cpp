#include <iostream>
#include <fstream>
#include <dirent.h>
#include "Log.cpp"

using namespace std;

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
	MyLog log;
	const char* tagg = TAG;
	log.setTag(tagg);
	if (!dir) {
		log.LOGD(path);
	}
	else
	{
		log.LOGD(path);
	}
	struct dirent* entry;
	while ((entry = readdir(dir))) {
		log.LOGD(entry->d_name);
	}
	closedir(dir);
	return 0;
}


