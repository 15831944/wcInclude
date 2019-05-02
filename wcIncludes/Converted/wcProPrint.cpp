#include "wcProPrint.h"

wcProPrint::wcProPrint(void)
{
}

wcProPrint::~wcProPrint(void)
{
}

ProError wcProPrint::PrintPrinterOptionsGet(ProCharName printer_type,ProPrintPrinterOpts *options)
{
	return ProPrintPrinterOptionsGet(printer_type,options);
}

ProError wcProPrint::PrintMdlOptionsGet(ProMdl model,ProPrintMdlOpts *options)
{
	return ProPrintMdlOptionsGet(model,options);
}

ProError wcProPrint::PrintPlacementOptionsGet(ProPrintPlacementOpts *options)
{
	return ProPrintPlacementOptionsGet(options);
}

ProError wcProPrint::PrintPCFOptionsGet(ProPath pcf_filename, ProMdl model,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options)
{
	return ProPrintPCFOptionsGet(pcf_filename, model,printer_options,mdl_options,place_options);
}

ProError wcProPrint::PrintExecute(int window_id,ProPrintPrinterOpts *printer_options,ProPrintMdlOpts *mdl_options,ProPrintPlacementOpts *place_options)
{
	return ProPrintExecute(window_id,printer_options,mdl_options,place_options);
}

