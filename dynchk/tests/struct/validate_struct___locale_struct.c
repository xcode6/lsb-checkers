// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <locale.h>

void validate_struct___locale_struct(struct __locale_struct  * input, char *name)
{
	validate_NULL_TYPETYPE(input->__locales,name );
	validate_NULL_TYPETYPE(input->__ctype_b,name );
	validate_NULL_TYPETYPE(input->__ctype_tolower,name );
	validate_NULL_TYPETYPE(input->__ctype_toupper,name );
	validate_NULL_TYPETYPE(input->__names,name );
}

