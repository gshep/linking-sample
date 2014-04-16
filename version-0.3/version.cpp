#include "version.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif

const Version_s g_current_version = { 0, 3, 0 };

VERSIONSHARED_EXPORT int get_version(Version_s * version)
{
	if (NULL == version)
	{
		return -1;
	}

	version->major = g_current_version.major;
	version->minor = g_current_version.minor;
	version->bugfix = g_current_version.bugfix;

	return 0;
}

VERSIONSHARED_EXPORT int get_number()
{
    return 3;
}

/** DEPRECATED!!! */
VERSIONSHARED_EXPORT Version_s get_version2()
{
	return g_current_version;
}

#ifdef __cplusplus
}
#endif
