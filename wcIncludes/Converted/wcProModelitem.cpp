#include "wcProModelitem.h"

wcProModelitem::wcProModelitem(void)
{
}

wcProModelitem::~wcProModelitem(void)
{
}

ProError wcProModelitem::ModelitemInit (ProMdl p_owner_handle,int item_id,ProType item_type,ProModelitem *p_handle)
{
	return ProModelitemInit (p_owner_handle,item_id,item_type,p_handle);
}

ProError wcProModelitem::ModelitemMdlGet (ProModelitem *p_model_item,ProMdl *p_owner)
{
	return ProModelitemMdlGet (p_model_item,p_owner);
}

ProError wcProModelitem::ModelitemNameGet (ProModelitem *p_item,ProName name)
{
	return ProModelitemNameGet (p_item,name);
}

ProError wcProModelitem::ModelitemNameSet (ProModelitem *p_item,ProName name)
{
	return ProModelitemNameSet (p_item,name);
}

ProError wcProModelitem::ModelitemByNameInit ( ProMdl mdl,ProType type,ProName name,ProModelitem* p_item )
{
	return ProModelitemByNameInit ( mdl,type,name,p_item );
}

ProError wcProModelitem::ModelitemNameCanChange ( ProModelitem* item,ProBoolean* can_change )
{
	return ProModelitemNameCanChange ( item,can_change );
}

ProError wcProModelitem::ModelitemDefaultnameGet ( ProModelitem *item,ProName name )
{
	return ProModelitemDefaultnameGet ( item,name );
}

ProError wcProModelitem::ModelitemUsernameDelete( ProModelitem *item )
{
	return ProModelitemUsernameDelete( item );
}

