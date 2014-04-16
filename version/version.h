#ifndef VERSION_H
#define VERSION_H

#include "version_global.h"

#ifdef __cplusplus
extern "C"
{
#endif

VERSIONSHARED_EXPORT int get_version();
VERSIONSHARED_EXPORT int get_number();

#ifdef __cplusplus
}
#endif

#endif // VERSION_H
