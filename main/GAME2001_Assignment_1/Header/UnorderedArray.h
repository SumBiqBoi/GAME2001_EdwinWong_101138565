#pragma once
#include "ArrayClass.h"

template<class T>
class UnorderedArray : public ArrayClass<T>
{
public:
	UnorderedArray(int size, int growBy = 1) : ArrayClass<T>(size, growBy = 1)
	{
		
	}
};