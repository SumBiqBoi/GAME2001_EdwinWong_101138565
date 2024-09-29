#include <iostream>
#include "header/UnorderedArray.h"

using namespace std;

int main()
{
	UnorderedArray<int> array(5);
	array.push(80);
	array.push(64);
	array.push(99);
	array.push(76);
	array.push(5);

	cout << "Not sorted: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}
	cout << endl;



	cout << "After sorting: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}
	cout << endl << endl;

	return 0;
}