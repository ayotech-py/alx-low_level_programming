#ifndef ABS(x)
#define ABS(x)
#if ABS < 1
#undef ABS
#define ABS(x) (4)
#endif
#else
#undef ABS
#define ABS(x) x
#endif
