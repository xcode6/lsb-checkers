/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xutil.h"



#ifdef TET_TEST
void X11_Xutil_h()
{
#else
int X11_Xutil_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xutil.h\n");
#endif

printf("Checking data structures in X11/Xutil.h\n");
#if __i386__
CheckTypeSize(XSizeHints,72, 8301, 2)
#elif __ia64__
CheckTypeSize(XSizeHints,80, 8301, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSizeHints,72, 8301, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSizeHints,72, 8301, 10)
#elif __powerpc64__
CheckTypeSize(XSizeHints,80, 8301, 9)
#elif __s390x__
CheckTypeSize(XSizeHints,80, 8301, 12)
#elif __x86_64__
CheckTypeSize(XSizeHints,80, 8301, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8301,0);
Msg("Find size of XSizeHints (8301)\n");
#endif

#if __i386__
CheckTypeSize(XWMHints,36, 8303, 2)
#elif __ia64__
CheckTypeSize(XWMHints,56, 8303, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XWMHints,36, 8303, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XWMHints,36, 8303, 10)
#elif __powerpc64__
CheckTypeSize(XWMHints,56, 8303, 9)
#elif __s390x__
CheckTypeSize(XWMHints,56, 8303, 12)
#elif __x86_64__
CheckTypeSize(XWMHints,56, 8303, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8303,0);
Msg("Find size of XWMHints (8303)\n");
#endif

#if __i386__
CheckTypeSize(XTextProperty,16, 8305, 2)
#elif __ia64__
CheckTypeSize(XTextProperty,32, 8305, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTextProperty,16, 8305, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XTextProperty,16, 8305, 10)
#elif __powerpc64__
CheckTypeSize(XTextProperty,32, 8305, 9)
#elif __s390x__
CheckTypeSize(XTextProperty,32, 8305, 12)
#elif __x86_64__
CheckTypeSize(XTextProperty,32, 8305, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8305,0);
Msg("Find size of XTextProperty (8305)\n");
#endif

#if __i386__
CheckTypeSize(XIconSize,24, 8309, 2)
#elif __ia64__
CheckTypeSize(XIconSize,24, 8309, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIconSize,24, 8309, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XIconSize,24, 8309, 10)
#elif __powerpc64__
CheckTypeSize(XIconSize,24, 8309, 9)
#elif __s390x__
CheckTypeSize(XIconSize,24, 8309, 12)
#elif __x86_64__
CheckTypeSize(XIconSize,24, 8309, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8309,0);
Msg("Find size of XIconSize (8309)\n");
#endif

#if __i386__
CheckTypeSize(XClassHint,8, 8311, 2)
#elif __ia64__
CheckTypeSize(XClassHint,16, 8311, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XClassHint,8, 8311, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XClassHint,8, 8311, 10)
#elif __powerpc64__
CheckTypeSize(XClassHint,16, 8311, 9)
#elif __s390x__
CheckTypeSize(XClassHint,16, 8311, 12)
#elif __x86_64__
CheckTypeSize(XClassHint,16, 8311, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8311,0);
Msg("Find size of XClassHint (8311)\n");
#endif

#if __i386__
CheckTypeSize(XComposeStatus,8, 8313, 2)
#elif __ia64__
CheckTypeSize(XComposeStatus,16, 8313, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XComposeStatus,8, 8313, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XComposeStatus,8, 8313, 10)
#elif __powerpc64__
CheckTypeSize(XComposeStatus,16, 8313, 9)
#elif __s390x__
CheckTypeSize(XComposeStatus,16, 8313, 12)
#elif __x86_64__
CheckTypeSize(XComposeStatus,16, 8313, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8313,0);
Msg("Find size of XComposeStatus (8313)\n");
#endif

#if __i386__
CheckTypeSize(Region,4, 8314, 2)
#elif __ia64__
CheckTypeSize(Region,8, 8314, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Region,4, 8314, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Region,4, 8314, 10)
#elif __powerpc64__
CheckTypeSize(Region,8, 8314, 9)
#elif __s390x__
CheckTypeSize(Region,8, 8314, 12)
#elif __x86_64__
CheckTypeSize(Region,8, 8314, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8314,0);
Msg("Find size of Region (8314)\n");
#endif

#if __i386__
CheckTypeSize(XVisualInfo,40, 8316, 2)
#elif __ia64__
CheckTypeSize(XVisualInfo,64, 8316, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XVisualInfo,40, 8316, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XVisualInfo,40, 8316, 10)
#elif __powerpc64__
CheckTypeSize(XVisualInfo,64, 8316, 9)
#elif __s390x__
CheckTypeSize(XVisualInfo,64, 8316, 12)
#elif __x86_64__
CheckTypeSize(XVisualInfo,64, 8316, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8316,0);
Msg("Find size of XVisualInfo (8316)\n");
#endif

#if __i386__
CheckTypeSize(XStandardColormap,40, 8318, 2)
#elif __ia64__
CheckTypeSize(XStandardColormap,80, 8318, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XStandardColormap,40, 8318, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XStandardColormap,40, 8318, 10)
#elif __powerpc64__
CheckTypeSize(XStandardColormap,80, 8318, 9)
#elif __s390x__
CheckTypeSize(XStandardColormap,80, 8318, 12)
#elif __x86_64__
CheckTypeSize(XStandardColormap,80, 8318, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8318,0);
Msg("Find size of XStandardColormap (8318)\n");
#endif

#if __i386__
CheckTypeSize(XContext,4, 8319, 2)
#elif __ia64__
CheckTypeSize(XContext,4, 8319, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XContext,4, 8319, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XContext,4, 8319, 10)
#elif __powerpc64__
CheckTypeSize(XContext,4, 8319, 9)
#elif __s390x__
CheckTypeSize(XContext,4, 8319, 12)
#elif __x86_64__
CheckTypeSize(XContext,4, 8319, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8319,0);
Msg("Find size of XContext (8319)\n");
#endif

#if __i386__
CheckTypeSize(XICCEncodingStyle,4, 8832, 2)
#elif __ia64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 10)
#elif __powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 9)
#elif __s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 12)
#elif __x86_64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8832,0);
Msg("Find size of XICCEncodingStyle (8832)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
