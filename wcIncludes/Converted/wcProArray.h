/*--------------  C L A S S  wcProArray  --------

   A Wrapper Class for ProE object: ProArray
   Created By: Michael Lucatz
   Date:       02/04/2006 22:09:39
   Version:    2.0
---------------------------------------------------*/

#pragma once
#include "wcproobject.h"
#include <ProArray.h>

class wcProArray: public wcProObject
{
public:
	wcProArray(void);
	~wcProArray(void);
public:

//    Allocates an array of objects. The maximum memory allocatedis approximately 2 Mb, except for alpha_unix (or other 64-bit
ProError ArrayAlloc (int n_objs,int obj_size,int reallocation_size,ProArray* p_array);

//    Frees a preallocated array.
ProError ArrayFree (ProArray* p_array);

//    Enables you to increase or decrease the size of an array.
ProError ArraySizeSet (ProArray* p_array,int size);

//    Returns the size of the specified array.
ProError ArraySizeGet (ProArray array,int* p_size);

//    Adds an object at a specified location to the array,or appends an object to the end of an array.
ProError ArrayObjectAdd (ProArray* p_array,int index,int n_objects,void* p_object);

//    Removes an object from a specified location in the array.
ProError ArrayObjectRemove (ProArray *p_array,int index,int n_objects);

//     Calculates the maximum number of objects that can bestored in a ProArray with objects of size obj_size.
ProError ArrayMaxCountGet(int obj_size,int *max_num_objs);

};
