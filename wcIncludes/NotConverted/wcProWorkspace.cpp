#include "wcProWorkspace.h"

wcProWorkspace::wcProWorkspace(void)
{
}

wcProWorkspace::~wcProWorkspace(void)
{
}

ProError wcProWorkspace::WorkspaceRegister (ProName WorkspaceName)
{
	return ProWorkspaceRegister (WorkspaceName);
}

ProError wcProWorkspace::CurrentWorkspaceGet(ProName rCurrentWorkspace)
{
	return ProCurrentWorkspaceGet(rCurrentWorkspace);
}

ProError wcProWorkspace::ObjModelsCheckOut ( ProBoolean linkOrCopy,ProName workspaceName,int objNo,ProFileName *objNames,int *objVersions,int relCriteria )
{
	return ProObjModelsCheckOut ( linkOrCopy,workspaceName,objNo,objNames,objVersions,relCriteria );
}

ProError wcProWorkspace::ObjRenamedInWSSessionSync (ProFileName objOldName,ProFileName objNewName,ProFileName genericName )
{
	return ProObjRenamedInWSSessionSync (objOldName,objNewName,genericName );
}

ProError wcProWorkspace::CurrentWorkspaceImport(ProWorkspaceImpExDepCriterion dep_criterion,wchar_t** source_objects)
{
	return ProCurrentWorkspaceImport(dep_criterion,source_objects);
}

ProError wcProWorkspace::CurrentWorkspaceExport(ProWorkspaceImpExDepCriterion dep_criterion,wchar_t** source_objects,ProPath target_path)
{
	return ProCurrentWorkspaceExport(dep_criterion,source_objects,target_path);
}

