#include <stdio.h>
#include <sys/types.h>

void validate_RWaddress(const void *address, const char *name)
{
	fprintf(stderr,
			"lsbdynchk: %s: Address %p is a parameter.(stub)\n",
			name, address);
}
