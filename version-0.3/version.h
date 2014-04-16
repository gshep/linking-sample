#ifndef VERSION_H
#define VERSION_H

#include "version_global.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct
{
	int major;
	int minor;
	int bugfix;
}
Version_s;

/** returns -1 if version == NULL;
 * returns -2 if fatal error occured
 * returns 0 if execution succeed */
VERSIONSHARED_EXPORT int get_version(Version_s * version);
VERSIONSHARED_EXPORT int get_number();

/** DEPRECATED!!! */
VERSIONSHARED_EXPORT Version_s get_version2();

#ifdef __cplusplus
}
#endif

#endif // VERSION_H
