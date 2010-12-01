/*
 * Test of GL/glxext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#define GLX_GLXEXT_PROTOTYPES
#include <GL/glx.h>

#include "GL/glxext.h"



#ifdef TET_TEST
void GL_glxext_h()
{
#else
int GL_glxext_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in GL/glxext.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLE_BUFFERS_ARB
	CompareConstant(GLX_SAMPLE_BUFFERS_ARB,100000,15449,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLE_BUFFERS_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLES_ARB
	CompareConstant(GLX_SAMPLES_ARB,100001,15450,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLES_ARB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_X_VISUAL_TYPE_EXT
	CompareConstant(GLX_X_VISUAL_TYPE_EXT,0x22,15453,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_X_VISUAL_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_TYPE_EXT
	CompareConstant(GLX_TRANSPARENT_TYPE_EXT,0x23,15454,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_TYPE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_INDEX_VALUE_EXT
	CompareConstant(GLX_TRANSPARENT_INDEX_VALUE_EXT,0x24,15455,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_INDEX_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_RED_VALUE_EXT
	CompareConstant(GLX_TRANSPARENT_RED_VALUE_EXT,0x25,15456,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_RED_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_GREEN_VALUE_EXT
	CompareConstant(GLX_TRANSPARENT_GREEN_VALUE_EXT,0x26,15457,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_GREEN_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_BLUE_VALUE_EXT
	CompareConstant(GLX_TRANSPARENT_BLUE_VALUE_EXT,0x27,15458,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_BLUE_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_ALPHA_VALUE_EXT
	CompareConstant(GLX_TRANSPARENT_ALPHA_VALUE_EXT,0x28,15459,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_ALPHA_VALUE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_NONE_EXT
	CompareConstant(GLX_NONE_EXT,0x8000,15460,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_NONE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRUE_COLOR_EXT
	CompareConstant(GLX_TRUE_COLOR_EXT,0x8002,15461,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRUE_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_DIRECT_COLOR_EXT
	CompareConstant(GLX_DIRECT_COLOR_EXT,0x8003,15462,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_DIRECT_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_PSEUDO_COLOR_EXT
	CompareConstant(GLX_PSEUDO_COLOR_EXT,0x8004,15463,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_PSEUDO_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STATIC_COLOR_EXT
	CompareConstant(GLX_STATIC_COLOR_EXT,0x8005,15464,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_STATIC_COLOR_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_GRAY_SCALE_EXT
	CompareConstant(GLX_GRAY_SCALE_EXT,0x8006,15465,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_GRAY_SCALE_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_STATIC_GRAY_EXT
	CompareConstant(GLX_STATIC_GRAY_EXT,0x8007,15466,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_STATIC_GRAY_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_RGB_EXT
	CompareConstant(GLX_TRANSPARENT_RGB_EXT,0x8008,15467,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_RGB_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_TRANSPARENT_INDEX_EXT
	CompareConstant(GLX_TRANSPARENT_INDEX_EXT,0x8009,15468,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_TRANSPARENT_INDEX_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VISUAL_CAVEAT_EXT
	CompareConstant(GLX_VISUAL_CAVEAT_EXT,0x20,15469,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_VISUAL_CAVEAT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SLOW_VISUAL_EXT
	CompareConstant(GLX_SLOW_VISUAL_EXT,0x8001,15470,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SLOW_VISUAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_NON_CONFORMANT_VISUAL_EXT
	CompareConstant(GLX_NON_CONFORMANT_VISUAL_EXT,0x800D,15471,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_NON_CONFORMANT_VISUAL_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SHARE_CONTEXT_EXT
	CompareConstant(GLX_SHARE_CONTEXT_EXT,0x800A,15472,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SHARE_CONTEXT_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_VISUAL_ID_EXT
	CompareConstant(GLX_VISUAL_ID_EXT,0x800B,15473,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_VISUAL_ID_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SCREEN_EXT
	CompareConstant(GLX_SCREEN_EXT,0x800C,15474,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SCREEN_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLE_BUFFERS_3DFX
	CompareConstant(GLX_SAMPLE_BUFFERS_3DFX,0x8050,15475,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLE_BUFFERS_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SAMPLES_3DFX
	CompareConstant(GLX_SAMPLES_3DFX,0x8051,15476,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SAMPLES_3DFX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_ARB_multisample
	CompareConstant(GLX_ARB_multisample,1,15480,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_ARB_multisample\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXT_visual_info
	CompareConstant(GLX_EXT_visual_info,1,15482,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_EXT_visual_info\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXT_visual_rating
	CompareConstant(GLX_EXT_visual_rating,1,15483,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_EXT_visual_rating\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_EXT_import_context
	CompareConstant(GLX_EXT_import_context,1,15484,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_EXT_import_context\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLX_SUN_get_transparent_index
	CompareConstant(GLX_SUN_get_transparent_index,1,15485,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: GLX_SUN_get_transparent_index\n");
cnt++;
#endif

#endif

extern void glXFreeContextEXT_db(Display *, GLXContext);
CheckInterfacedef(glXFreeContextEXT,glXFreeContextEXT_db);
extern GLXContextID glXGetContextIDEXT_db(GLXContext);
CheckInterfacedef(glXGetContextIDEXT,glXGetContextIDEXT_db);
extern GLXContext glXImportContextEXT_db(Display *, GLXContextID);
CheckInterfacedef(glXImportContextEXT,glXImportContextEXT_db);
extern int glXQueryContextInfoEXT_db(Display *, GLXContext, int, int *);
CheckInterfacedef(glXQueryContextInfoEXT,glXQueryContextInfoEXT_db);
extern __GLXextFuncPtr glXGetProcAddressARB_db(const GLubyte *);
CheckInterfacedef(glXGetProcAddressARB,glXGetProcAddressARB_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in GL/glxext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
