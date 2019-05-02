/*--------------  C L A S S  wcProPrint  --------

   A Wrapper Class for ProE object: ProPrint
   Created By: Michael Lucatz
   Date:       09/04/2006 12:38:46
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wchproobject.h"
#include <ProPrint.h>

class wcProPrint: public wcProObject
{
public:
	wcProPrint(void)
	{
	}

	~wcProPrint(void)
	{
	}

	ProError PrintPrinterOptionsGet(ProCharName printer_type,ProPrintPrinterOpts *options)
	{
		return ProPrintPrinterOptionsGet(printer_type,options);
	}

	ProError PrintMdlOptionsGet(ProMdl model,ProPrintMdlOpts *options)
	{
		return ProPrintMdlOptionsGet(model,options);
	}

	ProError PrintPlacementOptionsGet(ProPrintPlacementOpts *options)
	{
		return ProPrintPlacementOptionsGet(options);
	}

	ProError PrintPCFOptionsGet(ProPath pcf_filename, ProMdl model,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options)
	{
		return ProPrintPCFOptionsGet(pcf_filename, model,printer_options,mdl_options,place_options);
	}

	ProError PrintExecute(int window_id,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options)
	{
		return ProPrintExecute(window_id,printer_options,mdl_options,place_options);
	}
};