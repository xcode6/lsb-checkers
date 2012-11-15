// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <libxslt/xsltInternals.h>

int validate_struct__xsltStylesheet(struct _xsltStylesheet  * input, char *name)
{
int failure = 0;
	if(validate_struct__xsltStylesheet(input-> parent,name ))
		failure = 1;
	if(validate_struct__xsltStylesheet(input-> next,name ))
		failure = 1;
	if(validate_struct__xsltStylesheet(input-> imports,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> docList,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> doc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> stripSpaces,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> stripAll,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> cdataSection,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> variables,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> templates,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> templatesHash,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rootMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keyMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> elemMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> attrMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> parentMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> textMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> piMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> commentMatch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nsAliases,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> attributeSets,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nsHash,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nsDefs,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keys,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> method,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> methodURI,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> version,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> encoding,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> omitXmlDeclaration,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> decimalFormat,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> standalone,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> doctypePublic,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> doctypeSystem,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> indent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mediaType,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> preComps,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> warnings,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> errors,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exclPrefix,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exclPrefixTab,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exclPrefixNr,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exclPrefixMax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _private,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> extInfos,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> extrasNr,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> includes,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> dict,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> attVTs,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> defaultAlias,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nopreproc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> internalized,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> literal_result,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> principal,name ))
		failure = 1;
return failure;
}
