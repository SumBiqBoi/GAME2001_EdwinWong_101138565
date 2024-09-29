#pragma once
#include "ArrayClass.h"
#include <cassert>

template<class T>
class OrderedArray : public ArrayClass<T>
{
public:
	OrderedArray(int size, int growBy = 1) : ArrayClass<T>(size, growBy = 1)
	{

	}

	void InsertionSort(bool removeDuplicates)
	{
		assert(this->m_array != nullptr);

		T temp;
		int i = 0;

		for (int k = 1; k < this->m_numElements; k++)
		{
			temp = this->m_array[k];
			i = k;
			if (removeDuplicates)
			{
				this->m_array[i - 1] = temp;
				this->remove(this->m_array[i - 1]);
			}
			while (i > 0 && this->m_array[i - 1] >= temp)
			{
				this->m_array[i] = this->m_array[i - 1];
				i--;
			}
			this->m_array[i] = temp;
		}
	}
};