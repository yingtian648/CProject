#include <iostream>

#ifdef __LOGGER__
#define __LOGGER__

namespace logger {

	void LOGI(string tag, char msg[]);
	void LOGV(string tag, char msg[]);
	void LOGD(string tag, char msg[]);
	void LOGE(string tag, char msg[]);

};

#endif