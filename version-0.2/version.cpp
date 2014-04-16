#include "version.h"

#ifdef __cplusplus
extern "C"
{
#endif

VERSIONSHARED_EXPORT int get_version()
{
	return 2;
}

const Version_s g_current_version = { 0, 2, 0 };

VERSIONSHARED_EXPORT Version_s get_version2()
{
	return g_current_version;
}

VERSIONSHARED_EXPORT int get_number()
{
    return 2;
}

#ifdef __cplusplus
}
#endif
