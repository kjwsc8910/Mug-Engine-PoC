#pragma once

#ifdef MG_PLATFORM_WINDOWS
	#ifdef MG_BUILD_DLL
		#define MUG_API __declspec(dllexport)
	#else
		#define MUG_API __declspec(dllimport)
	#endif
#else
	#error Mug only supports windows!
#endif

#define BIT(x) (1 << x)