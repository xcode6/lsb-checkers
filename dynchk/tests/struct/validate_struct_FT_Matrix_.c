// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <freetype/fttypes.h>

int validate_struct_FT_Matrix_(struct FT_Matrix_  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> xx,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> xy,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> yx,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> yy,name ))
		failure = 1;
return failure;
}
