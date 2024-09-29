#pragma once
#include "ArrayClass.h"
#include <cassert>

template<class T>
class OrderedArray : public ArrayClass<T>
{
public:
	OrderedArray(int size, bool removeDuplicates, int growBy = 1) : ArrayClass<T>(size, growBy = 1)
	{
		this->removeDuplicates = removeDuplicates;
	}
	void push(T val) override
	{
		assert(this->m_array != nullptr);
		bool addValue = true;
		if (removeDuplicates && this->m_numElements > 0)
		{
			int i = 0;
			while (this->m_array[i] <= val && i < this->m_numElements)
			{
				addValue = this->m_array[i] != val;
				i++;
			}
		}
		if (addValue)
		{
			if (this->m_numElements >= this->m_maxSize)
			{
				this->Expand();
			}
			this->m_array[this->m_numElements] = val;
			this->m_numElements++;
			InsertionSort();
		}
	}

	bool removeDuplicates;

private:
	void InsertionSort()
	{
		assert(this->m_array != nullptr);

		T temp;
		int i = 0;

		for (int k = 1; k < this->m_numElements; k++)
		{
			temp = this->m_array[k];
			i = k;
			while (i > 0 && this->m_array[i - 1] >= temp)
			{
				this->m_array[i] = this->m_array[i - 1];
				i--;
			}
			this->m_array[i] = temp;
		}
	}
};