/*--------------  C L A S S  wcProWorkspace  --------

   A Wrapper Class for ProE object: ProWorkspace
   Created By: Michael Lucatz
   Date:       08/10/2007 14:44:24
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProWorkspace.h>

class wcProWorkspace: public wcProObject
{
public:
	wcProWorkspace(void);
	~wcProWorkspace(void);
public:

//  Registers a Workspace in Pro/ENGINEER.  Only one is allowedat a time, so if one is already registered, the new one will
ProError WorkspaceRegister (ProName WorkspaceName);

//  Returns the name of the Workspace currently registeredin Pro/ENGINEER.
ProError CurrentWorkspaceGet(ProName rCurrentWorkspace);

//  Checks out the latest version of Pro/INTRALINK objectsfrom the Commonspace to a Workspace using a
ProError ObjModelsCheckOut ( ProBoolean linkOrCopy,ProName workspaceName,int objNo,ProFileName *objNames,int *objVersions,int relCriteria );

//  Renames the object in Pro/E memory space when an object isrenamed in Pro/Intralink's Workspace from "objOldName" to
ProError ObjRenamedInWSSessionSync (ProFileName objOldName,ProFileName objNewName,ProFileName genericName );

//   Import specified objects from a disk to the current workspace ina linked session of Pro/ENGINEER. Can be called only when there
ProError CurrentWorkspaceImport(ProWorkspaceImpExDepCriterion dep_criterion,wchar_t** source_objects);

//   Export specified objects from the current workspace to a disk ina linked session of Pro/ENGINEER. Can be called only when there
ProError CurrentWorkspaceExport(ProWorkspaceImpExDepCriterion dep_criterion,wchar_t** source_objects,ProPath target_path);

};
