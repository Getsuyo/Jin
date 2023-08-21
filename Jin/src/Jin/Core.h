#pragma once

#ifdef JIN_PLATFORM_WINDOWS
	#ifdef JIN_BUILD_DLL
		#define JIN_API _declspec(dllexport)
	#else
		#define JIN_API _declspec(dllimport)
	#endif
#else
	#error Jin only supports Windows!
#endif