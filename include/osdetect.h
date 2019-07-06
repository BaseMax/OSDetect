/**
 *
 * @Name : osdetect.h
 * @Version : 1.0
 * @Programmer : Max
 * @Date : 2019-07-02
 * @Released under : https://github.com/BaseMax/OSDetect/blob/master/LICENSE
 * @Repository : https://github.com/BaseMax/OSDetect
 *
 **/
#ifndef OSDETECT
	#define OSDETECT
	// const char *OS();
	#if defined(_WIN32) || defined(_WIN64)
		#define OSDETECT_WINDOWS
	#elif defined(__APPLE__) || defined(__MACH__)
		#define OSDETECT_MAC
	#elif defined(__linux__) || defined(linux) || defined(__linux)
		#define OSDETECT_LINUX
	#elif defined(unix) || defined(__unix) || defined(__unix__)
		#define OSDETECT_UNIX
	#elif defined(__FreeBSD__)
		#define OSDETECT_BSD
	#endif
#endif
