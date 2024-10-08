#include <iostream>
#include "header/UnorderedArray.h"
#include "Header/OrderedArray.h"
#include "Header/ArrayClass.h"

using namespace std;

int main()
{

	UnorderedArray<int> uArray(5);
	uArray.push(80);
	uArray.push(64);
	uArray.push(99);
	uArray.push(76);
	uArray.push(5);
	//uArray.Expand(); for testing

	cout << "Not sorted(UnorderedArray): ";
	for (int i = 0; i < uArray.GetSize(); i++)
	{
		cout << " " << uArray[i];
	}
	cout << endl;

	OrderedArray<int> oArray(5, true);
	oArray.push(98);
	oArray.push(80);
	oArray.push(80);
	oArray.push(99);
	oArray.push(76);
	oArray.push(10);
	oArray.push(5);

	cout << "Ordered Array after sorting: ";
	for (int i = 0; i < oArray.GetSize(); i++)
	{
		cout << " " << oArray[i];
	}
	cout << endl << endl;

	return 0;
}