#ifndef ADD_DY_H
#define ADD_DY_H

#if(defined WIN32||defined_WIN32|| defined WINCE)&& defined EFIMPL
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT int add_dy_func(int a, int b);

#endif // !ADD_DY_H