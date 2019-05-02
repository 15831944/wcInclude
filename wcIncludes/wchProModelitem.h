/*--------------  C L A S S  wcProModelitem  --------

A Wrapper Class for ProE object: ProModelitem
Created By: Michael Lucatz
Date:       16/04/2006 14:57:03
Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProModelitem.h>

class wcProModelitem: public wcProObject
{
public:
	wcProModelitem(void)
	{
	}

	~wcProModelitem(void)
	{
	}

	ProError ModelitemInit (ProMdl p_owner_handle,int item_id,ProType item_type,ProModelitem *p_handle)
	{
		return ProModelitemInit (p_owner_handle,item_id,item_type,p_handle);
	}

	ProError ModelitemMdlGet (ProModelitem *p_model_item,ProMdl *p_owner)
	{
		return ProModelitemMdlGet (p_model_item,p_owner);
	}

	ProError ModelitemNameGet (ProModelitem *p_item,ProName name)
	{
		return ProModelitemNameGet (p_item,name);
	}

	ProError ModelitemNameSet (ProModelitem *p_item,ProName name)
	{
		return ProModelitemNameSet (p_item,name);
	}

	ProError ModelitemByNameInit ( ProMdl mdl,ProType type,ProName name,ProModelitem* p_item )
	{
		return ProModelitemByNameInit ( mdl,type,name,p_item );
	}

	ProError ModelitemNameCanChange ( ProModelitem* item,ProBoolean* can_change )
	{
		return ProModelitemNameCanChange ( item,can_change );
	}

	ProError ModelitemDefaultnameGet ( ProModelitem *item,ProName name )
	{
		return ProModelitemDefaultnameGet ( item,name );
	}

	ProError ModelitemUsernameDelete( ProModelitem *item )
	{
		return ProModelitemUsernameDelete( item );
	}

};