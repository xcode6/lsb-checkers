#ifndef __CHECK_FILE_H
#define __CHECK_FILE_H

#include "../tetj/tetj.h"
#include "../elfchk/elfchk.h"
#include "../elfchk/hdr.h"
#include "../elfchk/proghdr.h"

ElfFile *check_file(char *filename, struct tetj_handle *journal, int isProgram);
void check_lib(char *filename, struct tetj_handle *journal, int isProgram);

#endif /* __CHECK_FILE_H */
