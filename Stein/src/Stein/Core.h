#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STEIN_API __declspec(dllexport)
	#else
		#define STEIN_API __declspec(dllimport)
	#endif
#else
	#error Stein only support Windows
#endif
