#ifndef BAR_GLOBAL_H
#define BAR_GLOBAL_H

#ifdef WIN32
#    if defined(BAR_LIBRARY)
#        define BARSHARED_EXPORT __declspec(dllexport)
#    else
#        define BARSHARED_EXPORT __declspec(dllimport)
#    endif
#else
#   define BARSHARED_EXPORT 
#endif

#endif // BAR_GLOBAL_H
