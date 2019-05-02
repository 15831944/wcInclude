/*--------------  C L A S S  wcProMenuBar  --------

   A Wrapper Class for ProE object: ProMenuBar
   Created By: Michael Lucatz
   Date:       31/03/2006 23:20:28
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProMenuBar.h>

class wcProMenuBar: public wcProObject
{
public:
	wcProMenuBar(void);
	wcProMenuBar(ProFileName*);
	~wcProMenuBar(void);
	ProFileName *menuFileName;

public:

//  Adds a new action to Pro/ENGINEER.  This action can be later associated with a push button command in the Pro/ENGINEER
ProError CmdActionAdd ( char *action_name,uiCmdCmdActFn action_cb,uiCmdPriority priority,uiCmdAccessFn access_func,ProBoolean allow_in_non_active_window,ProBoolean allow_in_accessory_window,uiCmdCmdId *action_id );

//  Adds a new option to Pro/ENGINEER.  This option can be later associated with a check button or radio button group in the
ProError CmdOptionAdd ( char *option_name,uiCmdCmdActFn option_cb,ProBoolean boolean_operation,uiCmdCmdValFn set_value_cb,uiCmdAccessFn access_func,ProBoolean allow_in_non_active_window,ProBoolean allow_in_accessory_window,uiCmdCmdId *option_id );

//  Adds a function to be called before and after the callback function when the specified action or option is executed.
ProError CmdBracketFuncAdd ( uiCmdCmdId cmd_id,uiCmdCmdBktFn bracket_func,char *bracket_func_name,void **pp_bracket_data );

//  Finds the identifier of the specified action or option.
ProError CmdCmdIdFind ( char *cmd_name,uiCmdCmdId *cmd_id );

//  Adds an accessibility function to the specified action or option.
ProError CmdAccessFuncAdd ( uiCmdCmdId cmd_id,uiCmdAccessFn access_func,uiCmdAccessId *access_id );

//  Removed an accessibility function of the specified action or option.
ProError CmdAccessFuncRemove ( uiCmdCmdId cmd_id,uiCmdAccessId access_id );

//  Adds a new menu to the menu bar of Pro/ENGINEER.  This menu can be used later to add another menus, push buttons, check
ProError MenubarMenuAdd ( ProMenuItemName menu_name,ProMenuItemLabel untranslated_menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor,ProFileName filename );
ProError MenubarMenuAdd ( ProMenuItemName menu_name,ProMenuItemLabel untranslated_menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor);

//  Adds a new menu to the menu of Pro/ENGINEER.  This menu can be used later to add other menus, actions, and options.
ProError MenubarmenuMenuAdd ( ProMenuItemName parent_menu,ProMenuItemName menu_name,ProMenuItemLabel menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor,ProFileName filename );
ProError MenubarmenuMenuAdd ( ProMenuItemName parent_menu,ProMenuItemName menu_name,ProMenuItemLabel menu_label,ProMenuItemName neighbor,ProBoolean add_after_neighbor);

//  Adds a new push button to the menu of Pro/ENGINEER.
ProError MenubarmenuPushbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName push_button_name,ProMenuItemLabel push_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId action_id,ProFileName filename );
ProError MenubarmenuPushbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName push_button_name,ProMenuItemLabel push_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId action_id);

//  Adds a new check button to the menu of Pro/ENGINEER.
ProError MenubarmenuChkbuttonAdd ( ProMenuItemName parent_menu,ProMenuItemName check_button_name,ProMenuItemLabel check_button_label,ProMenuLineHelp one_line_help,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId option_id,ProFileName filename );

//  Sets a new value for the check button in the menu of Pro/ENGINEER.
ProError MenubarmenuChkbuttonValueSet (uiCmdValue *cmd_value,ProBoolean value );

//  Gets a new value for the check button in the menu of Pro/ENGINEER.
ProError MenubarmenuChkbuttonValueGet (uiCmdValue *cmd_value,ProBoolean *value );

//  Adds a new radio group to the menu of Pro/ENGINEER.
ProError MenubarmenuRadiogrpAdd ( ProMenuItemName parent_menu,ProMenuItemName radio_group_name,int number_radio_group_items,ProMenuItemName *radio_group_items,ProMenuItemLabel *radio_group_labels,ProMenuLineHelp *one_line_helps,ProMenuItemName neighbor,ProBoolean add_after_neighbor,uiCmdCmdId option_id,ProFileName filename );

//  Sets a new value for the radio group in the menu of Pro/ENGINEER.
ProError MenubarMenuRadiogrpValueSet ( uiCmdValue *cmd_value,ProMenuItemName selected_item );

//  Gets a value of the radio group in the menu of Pro/ENGINEER.
ProError MenubarMenuRadiogrpValueGet ( uiCmdValue *cmd_value,ProMenuItemName selected_item );

//  Designates the icon to be used with a user-created command.
ProError CmdIconSet( uiCmdCmdId cmd_id,ProMenuItemIcon cmd_icon );

//  Designates the command to appear as placeable in the ScreenCustomization dialog. This may not be used for existing
ProError CmdDesignate ( uiCmdCmdId cmd_id,ProMenuItemLabel button_label,ProMenuLineHelp one_line_help,ProMenuDescription description,ProFileName msg_file);

static uiCmdAccessState Default_uiCmdAccessFn(uiCmdAccessMode access_mode);
};
