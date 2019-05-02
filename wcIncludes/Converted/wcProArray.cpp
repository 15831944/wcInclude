#include "wcProArray.h"

wcProArray::wcProArray(void)
{
}

wcProArray::~wcProArray(void)
{
}

ProError wcProArray::ArrayAlloc (int n_objs,int obj_size,int reallocation_size,ProArray* p_array)
{
	return ProArrayAlloc (n_objs,obj_size,reallocation_size,p_array);
}

ProError wcProArray::ArrayFree (ProArray* p_array)
{
	return ProArrayFree (p_array);
}

ProError wcProArray::ArraySizeSet (ProArray* p_array,int size)
{
	return ProArraySizeSet (p_array,size);
}

ProError wcProArray::ArraySizeGet (ProArray array,int* p_size)
{
	return ProArraySizeGet (array,p_size);
}

ProError wcProArray::ArrayObjectAdd (ProArray* p_array,int index,int n_objects,void* p_object)
{
	return ProArrayObjectAdd (p_array,index,n_objects,p_object);
}

ProError wcProArray::ArrayObjectRemove (ProArray *p_array,int index,int n_objects)
{
	return ProArrayObjectRemove (p_array,index,n_objects);
}

ProError wcProArray::ArrayMaxCountGet(int obj_size,int *max_num_objs)
{
	return ProArrayMaxCountGet(obj_size,max_num_objs);
}

