#include "wcProMenuBar.h"

wcProMenuBar::wcProMenuBar(void)
{
}

wcProMenuBar::wcProMenuBar(ProFileName *PFN)
{
	menuFileName = PFN;
}
wcProMenuBar::~wcProMenuBar(void)
{
}

ProError wcProMenuBar::CmdActionAdd ( char *action_name,uiCmdCmdActFn action_cb,uiCmdPriority priority,uiCmdAccessFn access_func,ProBoolean allow_in_non_active_window,ProBoolean allow_in_accessory_window,uiCmdCmdId *action_id )
{
	return ProCmdActionAdd ( action_name,action_cb,priority,access_func,allow_in_non_active_window,allow_in_accessory_window,action_id );
}

ProError wcProMenuBar::CmdOptionAdd ( char *option_name,uiCmdCmdActFn option_cb,ProBoolean boolean_operation,uiCmdCmdValFn set_value_cb,uiCmdAccessFn access_func,ProBoolean allow_in_non_active_window,ProBoolean allow_in_accessory_window,uiCmdCmdId *option_id )
{
	return ProCmdOptionAdd ( option_name,option_cb,boolean_operation,set_value_cb,access_func,allow_in_non_active_window,allow_in_accessory_window,option_id );
}

ProError wcProMenuBar::CmdBracketFuncAdd ( uiCmdCmdId cmd_id,uiCmdCmdBktFn bracket_func,char *bracket_func_name,void **pp_bracket_data )
{
	return ProCmdBracketFuncAdd ( cmd_id,bracket_func,bracket_func_name,pp_bracket_data );
}

ProError wcProMenuBar::CmdCmdIdFind ( char *cmd_name,uiCmdCmdId *cmd_id )
{
	return ProCmdCmdIdFind ( cmd_name,cmd_id );
}

ProError wcProMenuBar::CmdAccessFuncAdd ( uiCmdCmdId cmd_id,uiCmdAccessFn access_func,uiCmdAccessId *access_id )
{
	return ProCmdAccessFuncAdd ( cmd_id,access_func,access_id );
}

ProError wcProMenuBar::CmdAccessFuncRemove ( uiCmdCmdId cmd_id,uiCmdAccessId access_id )
{
	return ProCmdAccessFuncRemove ( cmd_id,access_id );
}

ProError wcProMenuBar::MenubarMenuAdd(ProMenuItemName menu_name,ProMenuItemLabel untranslated_menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor)
{
	return ProMenubarMenuAdd ( menu_name,untranslated_menu_label,neighbor,add_after_neighbor, *menuFileName);
}
ProError wcProMenuBar::MenubarMenuAdd ( ProMenuItemName menu_name,ProMenuItemLabel untranslated_menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor,ProFileName filename )
{
	return ProMenubarMenuAdd ( menu_name,untranslated_menu_label,neighbor,add_after_neighbor,filename );
}

ProError wcProMenuBar::MenubarmenuMenuAdd ( ProMenuItemName parent_menu,ProMenuItemName menu_name,ProMenuItemLabel menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor,ProFileName filename )
{
	return ProMenubarmenuMenuAdd ( parent_menu,menu_name,menu_label,neighbor,add_after_neighbor,filename );
}
ProError wcProMenuBar::MenubarmenuMenuAdd ( ProMenuItemName parent_menu,ProMenuItemName menu_name,ProMenuItemLabel menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor)
{
	return ProMenubarmenuMenuAdd ( parent_menu,menu_name,menu_label,neighbor,add_after_neighbor,*menuFileName );
}

ProError wcProMenuBar::MenubarmenuPushbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName push_button_name,ProMenuItemLabel push_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId action_id)
{
	return ProMenubarmenuPushbuttonAdd( parent_menu,push_button_name,push_button_label,one_line_help,neighbor,add_after_neighbor,action_id, *menuFileName);
}

ProError wcProMenuBar::MenubarmenuPushbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName push_button_name,ProMenuItemLabel push_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId action_id,ProFileName filename )
{
	return ProMenubarmenuPushbuttonAdd ( parent_menu,push_button_name,push_button_label,one_line_help,neighbor,add_after_neighbor,action_id,filename );
}

ProError wcProMenuBar::MenubarmenuChkbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName check_button_name,ProMenuItemLabel check_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId option_id,ProFileName filename )
{
	return ProMenubarmenuChkbuttonAdd ( parent_menu,check_button_name,check_button_label,one_line_help,neighbor,add_after_neighbor,option_id,filename );
}

ProError wcProMenuBar::MenubarmenuChkbuttonValueSet (uiCmdValue *cmd_value,ProBoolean value )
{
	return ProMenubarmenuChkbuttonValueSet (cmd_value,value );
}

ProError wcProMenuBar::MenubarmenuChkbuttonValueGet (uiCmdValue *cmd_value,ProBoolean *value )
{
	return ProMenubarmenuChkbuttonValueGet (cmd_value,value );
}

ProError wcProMenuBar::MenubarmenuRadiogrpAdd ( ProMenuItemName parent_menu,ProMenuItemName radio_group_name,int number_radio_group_items,ProMenuItemName *radio_group_items,ProMenuItemLabel *radio_group_labels,ProMenuLineHelp *one_line_helps,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId option_id,ProFileName filename )
{
	return ProMenubarmenuRadiogrpAdd ( parent_menu,radio_group_name,number_radio_group_items,radio_group_items,radio_group_labels,one_line_helps,neighbor,add_after_neighbor,option_id,filename );
}

ProError wcProMenuBar::MenubarMenuRadiogrpValueSet ( uiCmdValue *cmd_value,ProMenuItemName selected_item )
{
	return ProMenubarMenuRadiogrpValueSet ( cmd_value,selected_item );
}

ProError wcProMenuBar::MenubarMenuRadiogrpValueGet ( uiCmdValue *cmd_value,ProMenuItemName selected_item )
{
	return ProMenubarMenuRadiogrpValueGet ( cmd_value,selected_item );
}

ProError wcProMenuBar::CmdIconSet( uiCmdCmdId cmd_id,ProMenuItemIcon cmd_icon )
{
	return ProCmdIconSet( cmd_id,cmd_icon );
}

ProError wcProMenuBar::CmdDesignate ( uiCmdCmdId cmd_id,ProMenuItemLabel button_label,ProMenuLineHelp one_line_help,ProMenuDescription description,ProFileName msg_file)
{
	return ProCmdDesignate ( cmd_id,button_label,one_line_help,description,msg_file);
}

uiCmdAccessState wcProMenuBar::Default_uiCmdAccessFn(uiCmdAccessMode access_mode)
{
	return (ACCESS_AVAILABLE);
}