/*
* Definition.h
*
*  Created on: Feb 10, 2014
*      Author: johan
*/
//PhysX3_x64.lib;PhysXProfileSDK.lib;PhysX3Extensions.lib;PhysX3Common_x64.lib;PhysXVisualDebuggerSDK.lib;%(AdditionalDependencies)
//PhysX3_x64.dll;PhysX3Common_x64.dll;PhysX3CharacterKinematic_x64.dll;PhysX3Cooking_x64.dll;nvToolsExt64_1.dll;PxFoundation_x64.dll;PxPvdSDK_x64.dll;glut32.dll;%(AdditionalDependencies)
#ifndef DEFINITION_H_
#define DEFINITION_H_

//#define DEBUG

#define _CRT_SECURE_NO_WARNINGS /* Visual Studios annoying warnings */
#define _SCL_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define NOMINMAX /* Windows defines min, max that messes up std::min, std::max */

#define ANGLE_EPSILON (10e-05)

#include <cstdlib>
#include <cmath> // Needed by PxPhysicsAPI.h under Linux.

#include <Physics.h>

namespace Debug {
	void printf(const char *file, const char *function, size_t line, const char *expr, ...);
	void printf_noreturn(const char *file, const char *function, size_t line, const char *expr, ...);
}

#define PRINT(fmt, ...) ::Debug::printf(__FILE__, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINT_NORETURN(fmt, ...) ::Debug::printf_noreturn(__FILE__, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)

#endif /* DEFINITION_H_ */
