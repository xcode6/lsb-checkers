/* Generated file - Do Not Edit */

#include "rpmchk.h"
#include "tagfuncs.h"

RpmIdxTagFuncRec SigTags[] = {
{RPMTAG_HEADERSIGNATURES,	"RPMTAG_HEADERSIGNATURES",	BIN,	16,	checkRpmIdxHEADERSIGNATURES,	Required,	NotSeen},
{RPMTAG_HEADERIMMUTABLE,	"RPMTAG_HEADERIMMUTABLE",	BIN,	16,	checkRpmIdxHEADERIMMUTABLE,	Required,	NotSeen},
{RPMTAG_HEADERI18NTABLE,	"RPMTAG_HEADERI18NTABLE",	STRING_ARRAY,	0,	checkRpmIdxHEADERI18NTABLE,	Required,	NotSeen},
{SIGTAG_SHA1HEADER,	"SIGTAG_SHA1HEADER",	STRING,	1,	checkRpmIdxSHA1HEADER,	Required,	NotSeen},
{SIGTAG_SIGSIZE,	"SIGTAG_SIGSIZE",	INT32,	1,	checkRpmIdxSIGSIZE,	Required,	NotSeen},
{SIGTAG_MD5,	"SIGTAG_MD5",	BIN,	16,	checkRpmIdxMD5,	Required,	NotSeen},
	};


int numSigIdxTags = sizeof(SigTags)/sizeof(RpmIdxTagFuncRec);

RpmIdxTagFuncRec HdrTags[] = {
{RPMTAG_HEADERSIGNATURES,	"RPMTAG_HEADERSIGNATURES",	BIN,	16,	checkRpmIdxHEADERSIGNATURES,	Required,	NotSeen},
{RPMTAG_HEADERIMMUTABLE,	"RPMTAG_HEADERIMMUTABLE",	BIN,	16,	checkRpmIdxHEADERIMMUTABLE,	Required,	NotSeen},
{RPMTAG_HEADERI18NTABLE,	"RPMTAG_HEADERI18NTABLE",	STRING_ARRAY,	0,	checkRpmIdxHEADERI18NTABLE,	Required,	NotSeen},
{RPMTAG_NAME,	"RPMTAG_NAME",	STRING,	1,	checkRpmIdxNAME,	Required,	NotSeen},
{RPMTAG_VERSION,	"RPMTAG_VERSION",	STRING,	1,	checkRpmIdxVERSION,	Required,	NotSeen},
{RPMTAG_RELEASE,	"RPMTAG_RELEASE",	STRING,	1,	checkRpmIdxRELEASE,	Required,	NotSeen},
{RPMTAG_SUMMARY,	"RPMTAG_SUMMARY",	I18NSTRING,	0,	checkRpmIdxSUMMARY,	Required,	NotSeen},
{RPMTAG_DESCRIPTION,	"RPMTAG_DESCRIPTION",	I18NSTRING,	0,	checkRpmIdxDESCRIPTION,	Required,	NotSeen},
{RPMTAG_BUILDTIME,	"RPMTAG_BUILDTIME",	INT32,	1,	checkRpmIdxBUILDTIME,	Optional,	NotSeen},
{RPMTAG_BUILDHOST,	"RPMTAG_BUILDHOST",	STRING,	1,	checkRpmIdxBUILDHOST,	Optional,	NotSeen},
{RPMTAG_SIZE,	"RPMTAG_SIZE",	INT32,	1,	checkRpmIdxSIZE,	Required,	NotSeen},
{RPMTAG_LICENSE,	"RPMTAG_LICENSE",	STRING,	1,	checkRpmIdxLICENSE,	Required,	NotSeen},
{RPMTAG_GROUP,	"RPMTAG_GROUP",	I18NSTRING,	1,	checkRpmIdxGROUP,	Required,	NotSeen},
{RPMTAG_OS,	"RPMTAG_OS",	STRING,	1,	checkRpmIdxOS,	Required,	NotSeen},
{RPMTAG_ARCH,	"RPMTAG_ARCH",	STRING,	1,	checkRpmIdxARCH,	Required,	NotSeen},
{RPMTAG_FILESIZES,	"RPMTAG_FILESIZES",	INT32,	0,	checkRpmIdxFILESIZES,	Required,	NotSeen},
{RPMTAG_FILEMODES,	"RPMTAG_FILEMODES",	INT16,	0,	checkRpmIdxFILEMODES,	Required,	NotSeen},
{RPMTAG_FILERDEVS,	"RPMTAG_FILERDEVS",	INT16,	0,	checkRpmIdxFILERDEVS,	Required,	NotSeen},
{RPMTAG_FILEMTIMES,	"RPMTAG_FILEMTIMES",	INT32,	0,	checkRpmIdxFILEMTIMES,	Required,	NotSeen},
{RPMTAG_FILEMD5S,	"RPMTAG_FILEMD5S",	STRING_ARRAY,	0,	checkRpmIdxFILEMD5S,	Required,	NotSeen},
{RPMTAG_FILELINKTOS,	"RPMTAG_FILELINKTOS",	STRING_ARRAY,	0,	checkRpmIdxFILELINKTOS,	Required,	NotSeen},
{RPMTAG_FILEFLAGS,	"RPMTAG_FILEFLAGS",	INT32,	0,	checkRpmIdxFILEFLAGS,	Required,	NotSeen},
{RPMTAG_FILEUSERNAME,	"RPMTAG_FILEUSERNAME",	STRING_ARRAY,	0,	checkRpmIdxFILEUSERNAME,	Required,	NotSeen},
{RPMTAG_FILEGROUPNAME,	"RPMTAG_FILEGROUPNAME",	STRING_ARRAY,	0,	checkRpmIdxFILEGROUPNAME,	Required,	NotSeen},
{RPMTAG_SOURCERPM,	"RPMTAG_SOURCERPM",	STRING,	1,	checkRpmIdxSOURCERPM,	Optional,	NotSeen},
{RPMTAG_FILEVERIFYFLAGS,	"RPMTAG_FILEVERIFYFLAGS",	INT32,	0,	checkRpmIdxFILEVERIFYFLAGS,	Required,	NotSeen},
{RPMTAG_ARCHIVESIZE,	"RPMTAG_ARCHIVESIZE",	INT32,	1,	checkRpmIdxARCHIVESIZE,	Required,	NotSeen},
{RPMTAG_PROVIDENAME,	"RPMTAG_PROVIDENAME",	STRING_ARRAY,	1,	checkRpmIdxPROVIDENAME,	Required,	NotSeen},
{RPMTAG_REQUIREFLAGS,	"RPMTAG_REQUIREFLAGS",	INT32,	0,	checkRpmIdxREQUIREFLAGS,	Required,	NotSeen},
{RPMTAG_REQUIRENAME,	"RPMTAG_REQUIRENAME",	STRING_ARRAY,	0,	checkRpmIdxREQUIRENAME,	Required,	NotSeen},
{RPMTAG_REQUIREVERSION,	"RPMTAG_REQUIREVERSION",	STRING_ARRAY,	0,	checkRpmIdxREQUIREVERSION,	Required,	NotSeen},
{RPMTAG_PAYLOADFORMAT,	"RPMTAG_PAYLOADFORMAT",	STRING,	1,	checkRpmIdxPAYLOADFORMAT,	Required,	NotSeen},
{RPMTAG_PAYLOADCOMPRESSOR,	"RPMTAG_PAYLOADCOMPRESSOR",	STRING,	1,	checkRpmIdxPAYLOADCOMPRESSOR,	Required,	NotSeen},
	};

int numHdrIdxTags = sizeof(HdrTags)/sizeof(RpmIdxTagFuncRec);
