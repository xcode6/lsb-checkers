// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#include <complex.h>
#undef csin
static double complex(*funcptr) (double complex ) = 0;

double complex csin (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csin");
	validate_NULL_TYPETYPE(arg0, "csin");
	return funcptr(arg0);
}

double complex lsb_csin (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csin");
	return funcptr(arg0);
}

