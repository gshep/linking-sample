#ifndef VERSION_H
#define VERSION_H

#include "version_global.h"

#ifdef __cplusplus
extern "C"
{
#endif

/** DEPRECATED!!! */
VERSIONSHARED_EXPORT int get_version();

typedef struct
{
	int major;
	int minor;
	int bugfix;
}
Version_s;

VERSIONSHARED_EXPORT Version_s get_version2();
VERSIONSHARED_EXPORT int get_number();

#ifdef __cplusplus
}
#endif

#endif // VERSION_H
