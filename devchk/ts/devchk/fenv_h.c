/*
 * Test of fenv.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "fenv.h"



#ifdef TET_TEST
void fenv_h()
{
#else
int fenv_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in fenv.h\n");
#if defined __powerpc64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1 << (31 - 2)),5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1 << (31 - 2)),5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1UL << 0),5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x01,5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x80,5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x01,5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x80,5298,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#else
Msg( "No definition for FE_INVALID (5298, int) in db for this architecture\n");
#ifdef FE_INVALID
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5298,%d,'""3.0""',NULL);\n", architecture, FE_INVALID);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1 << (31 - 5)),5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1 << (31 - 5)),5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1UL << 2),5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x04,5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x40,5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x04,5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x40,5299,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#else
Msg( "No definition for FE_DIVBYZERO (5299, int) in db for this architecture\n");
#ifdef FE_DIVBYZERO
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5299,%d,'""3.0""',NULL);\n", architecture, FE_DIVBYZERO);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1 << (31 - 3)),5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1 << (31 - 3)),5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1UL << 3),5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x08,5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x20,5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x08,5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x20,5300,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#else
Msg( "No definition for FE_OVERFLOW (5300, int) in db for this architecture\n");
#ifdef FE_OVERFLOW
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5300,%d,'""3.0""',NULL);\n", architecture, FE_OVERFLOW);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1 << (31 - 4)),5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1 << (31 - 4)),5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1UL << 4),5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UNDERFLOW (5301, int) in db for this architecture\n");
#ifdef FE_UNDERFLOW
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5301,%d,'""3.0""',NULL);\n", architecture, FE_UNDERFLOW);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1 << (31 - 6)),5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1 << (31 - 6)),5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1UL << 5),5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x20,5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x08,5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x20,5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x08,5302,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#else
Msg( "No definition for FE_INEXACT (5302, int) in db for this architecture\n");
#ifdef FE_INEXACT
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5302,%d,'""3.0""',NULL);\n", architecture, FE_INEXACT);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#else
Msg( "No definition for FE_TONEAREST (5303, int) in db for this architecture\n");
#ifdef FE_TONEAREST
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5303,%d,'""3.0""',NULL);\n", architecture, FE_TONEAREST);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,3,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,3,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,1,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x400,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x3,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x400,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x3,5304,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#else
Msg( "No definition for FE_DOWNWARD (5304, int) in db for this architecture\n");
#ifdef FE_DOWNWARD
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5304,%d,'""3.0""',NULL);\n", architecture, FE_DOWNWARD);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,2,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,2,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,2,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x800,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x2,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x800,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x2,5305,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UPWARD (5305, int) in db for this architecture\n");
#ifdef FE_UPWARD
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5305,%d,'""3.0""',NULL);\n", architecture, FE_UPWARD);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,1,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,1,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,3,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0xc00,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0x1,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0xc00,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0x1,5306,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#else
Msg( "No definition for FE_TOWARDZERO (5306, int) in db for this architecture\n");
#ifdef FE_TOWARDZERO
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5306,%d,'""3.0""',NULL);\n", architecture, FE_TOWARDZERO);
#endif
#endif
#if defined __powerpc64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_UNDERFLOW | FE_OVERFLOW | FE_DIVBYZERO | FE_UNNORMAL | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#else
Msg( "No definition for FE_ALL_EXCEPT (5307, int) in db for this architecture\n");
#ifdef FE_ALL_EXCEPT
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5307,%d,'""3.0""',NULL);\n", architecture, FE_ALL_EXCEPT);
#endif
#endif
#if defined __powerpc64__
/* No test for FE_DFL_ENV */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for FE_DFL_ENV */
#elif defined __ia64__
/* No test for FE_DFL_ENV */
#elif defined __i386__
/* No test for FE_DFL_ENV */
#elif defined __s390x__
/* No test for FE_DFL_ENV */
#elif defined __x86_64__
/* No test for FE_DFL_ENV */
#elif defined __s390__ && !defined __s390x__
/* No test for FE_DFL_ENV */
#else
Msg( "No definition for FE_DFL_ENV (5308, macro) in db for this architecture\n");
#ifdef FE_DFL_ENV
#endif
#endif
#if defined __ia64__
#ifdef FE_UNNORMAL
	CompareConstant(FE_UNNORMAL,1UL << 1,5309,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FE_UNNORMAL\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UNNORMAL (5309, int) in db for this architecture\n");
#ifdef FE_UNNORMAL
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5309,%d,'""3.0""',NULL);\n", architecture, FE_UNNORMAL);
#endif
#endif
#if defined __s390x__
CheckTypeSize(fexcept_t,4, 11038, 12, 3.0, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(fexcept_t,2, 11038, 11, 3.0, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fexcept_t,4, 11038, 10, 3.0, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(fexcept_t,4, 11038, 9, 3.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fexcept_t,4, 11038, 6, 3.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(fexcept_t,8, 11038, 3, 3.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(fexcept_t,2, 11038, 2, 3.0, NULL, 5, NULL)
#endif

#if defined __s390x__
CheckTypeSize(fenv_t,16, 11040, 12, 3.0, NULL, 11066, NULL)
#elif defined __x86_64__
CheckTypeSize(fenv_t,32, 11040, 11, 3.0, NULL, 11039, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fenv_t,8, 11040, 10, 3.0, NULL, 11066, NULL)
#elif defined __powerpc64__
CheckTypeSize(fenv_t,8, 11040, 9, 3.0, NULL, 13, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fenv_t,8, 11040, 6, 3.0, NULL, 13, NULL)
#elif defined __ia64__
CheckTypeSize(fenv_t,8, 11040, 3, 3.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(fenv_t,28, 11040, 2, 3.0, NULL, 11039, NULL)
#endif

extern int fedisableexcept_db(int);
CheckInterfacedef(fedisableexcept,fedisableexcept_db);
extern int feenableexcept_db(int);
CheckInterfacedef(feenableexcept,feenableexcept_db);
extern int fegetexcept_db(void);
CheckInterfacedef(fegetexcept,fegetexcept_db);
extern int feclearexcept_db(int);
CheckInterfacedef(feclearexcept,feclearexcept_db);
extern int fegetenv_db(fenv_t *);
CheckInterfacedef(fegetenv,fegetenv_db);
extern int fegetexceptflag_db(fexcept_t *, int);
CheckInterfacedef(fegetexceptflag,fegetexceptflag_db);
extern int fegetround_db(void);
CheckInterfacedef(fegetround,fegetround_db);
extern int feholdexcept_db(fenv_t *);
CheckInterfacedef(feholdexcept,feholdexcept_db);
extern int feraiseexcept_db(int);
CheckInterfacedef(feraiseexcept,feraiseexcept_db);
extern int fesetenv_db(const fenv_t *);
CheckInterfacedef(fesetenv,fesetenv_db);
extern int fesetexceptflag_db(const fexcept_t *, int);
CheckInterfacedef(fesetexceptflag,fesetexceptflag_db);
extern int fesetround_db(int);
CheckInterfacedef(fesetround,fesetround_db);
extern int fetestexcept_db(int);
CheckInterfacedef(fetestexcept,fetestexcept_db);
extern int feupdateenv_db(const fenv_t *);
CheckInterfacedef(feupdateenv,feupdateenv_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in fenv.h\n\n",pcnt,cnt);
return cnt;
#endif

}
