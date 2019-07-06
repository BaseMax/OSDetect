/**
 *
 * @Name : osdetect.c
 * @Version : 1.0
 * @Programmer : Max
 * @Date : 2019-07-02
 * @Released under : https://github.com/BaseMax/OSDetect/blob/master/LICENSE
 * @Repository : https://github.com/BaseMax/OSDetect
 *
 **/
// char *OS() {
const char *OS() {
	#ifdef _WIN32
		return "Windows 32";
	#elif _WIN64
		return "Windows 64";
	#elif __APPLE__ || __MACH__
		return "MacOS";
	#elif __linux__
		return "Linux";
	#elif __FreeBSD__
		return "FreeBSD";
	#elif __unix || __unix__
		return "Unix";
	#endif
	// #else
	// 	return "unknown";
	// #endif
	return "other";
}
