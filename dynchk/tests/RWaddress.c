#include <stdio.h>
#include <sys/types.h>
#include "../libs/__lsb_funcs.h"
#include "memmap.h"

void validate_RWaddress(const void *address, const char *name)
{
	if( !mem_is_RW(address) ) {
		__lsb_fprintf(stderr,
				"Parameter to %s is not a valid RW address %p\n",
				name, address );
	}
}
