/*--------------  C L A S S  wcProModelitem  --------

   A Wrapper Class for ProE object: ProModelitem
   Created By: Michael Lucatz
   Date:       16/04/2006 14:57:03
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProModelitem.h>

class wcProModelitem: public wcProObject
{
public:
	wcProModelitem(void);
	~wcProModelitem(void);
public:

//      Initializes the ProModelitem handle. For betterperformance,
ProError ModelitemInit (ProMdl p_owner_handle,int item_id,ProType item_type,ProModelitem *p_handle);

//      Retrieves the model the owns the specified item.
ProError ModelitemMdlGet (ProModelitem *p_model_item,ProMdl *p_owner);

//      Retrieves the name of the specified model item.
ProError ModelitemNameGet (ProModelitem *p_item,ProName name);

//      Sets or resets the name of the model item.
ProError ModelitemNameSet (ProModelitem *p_item,ProName name);

//   Gets a model item handle, given the name andtype of the item ( p_item is pre allocated ).
ProError ModelitemByNameInit ( ProMdl mdl,ProType type,ProName name,ProModelitem* p_item );

//   Identifies whether or not a modelitem's name is readonly.
ProError ModelitemNameCanChange ( ProModelitem* item,ProBoolean* can_change );

//    Gets the  default name for a new item,if you were to create it.
ProError ModelitemDefaultnameGet ( ProModelitem *item,ProName name );

//    Removes the user name from db.
ProError ModelitemUsernameDelete( ProModelitem *item );

};
