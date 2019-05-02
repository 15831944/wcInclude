/*--------------  C L A S S  wcProPrint  --------

   A Wrapper Class for ProE object: ProPrint
   Created By: Michael Lucatz
   Date:       09/04/2006 12:38:46
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProPrint.h>

class wcProPrint: public wcProObject
{
public:
	wcProPrint(void);
	~wcProPrint(void);
public:

//  Get printer options for a specified printer
ProError PrintPrinterOptionsGet(ProCharName printer_type,ProPrintPrinterOpts *options);

//  Get model options for a specified model
ProError PrintMdlOptionsGet(ProMdl model,ProPrintMdlOpts *options);

//  Get the current print placement options
ProError PrintPlacementOptionsGet(ProPrintPlacementOpts *options);

//  Get the print options from a specified PCF file.
ProError PrintPCFOptionsGet(ProPath pcf_filename, ProMdl model,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options);

//  Print a window using the specified options The mdl in the window must match the mdl in mdl_options.
ProError PrintExecute(int window_id,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options);

};
