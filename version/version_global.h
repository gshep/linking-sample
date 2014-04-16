#ifndef VERSION_GLOBAL_H
#define VERSION_GLOBAL_H

#ifdef WIN32
#    if defined(VERSION_LIBRARY)
#        define VERSIONSHARED_EXPORT __declspec(dllexport)
#    else
#        define VERSIONSHARED_EXPORT __declspec(dllimport)
#    endif
#else
#   define VERSIONSHARED_EXPORT
#endif

#endif // VERSION_GLOBAL_H
