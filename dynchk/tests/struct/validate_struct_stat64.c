// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/stat.h>

void validate_struct_stat64(struct stat64 * input)
{
	validate_NULL_TYPETYPE(input->dev_t);
	validate_NULL_TYPETYPE(input->unsigned int);
	validate_NULL_TYPETYPE(input->ino_t);
	validate_NULL_TYPETYPE(input->mode_t);
	validate_NULL_TYPETYPE(input->nlink_t);
	validate_NULL_TYPETYPE(input->uid_t);
	validate_NULL_TYPETYPE(input->gid_t);
	validate_NULL_TYPETYPE(input->dev_t);
	validate_NULL_TYPETYPE(input->unsigned int);
	validate_NULL_TYPETYPE(input->off64_t);
	validate_NULL_TYPETYPE(input->blksize_t);
	validate_NULL_TYPETYPE(input->blkcnt64_t);
	validate_struct_timespec(input->struct timespec);
	validate_struct_timespec(input->struct timespec);
	validate_struct_timespec(input->struct timespec);
	validate_NULL_TYPETYPE(input->ino64_t);
}

