#include <iostream>
#include "Header/SinglyLinkedList.h"
using namespace std;

int main()
{
	cout << "Priority Queue Singly Linked List" << endl << endl;

	LinkedList<int> linkedList;

	linkedList.Push(1, 30);
	linkedList.Push(8, 20);
	linkedList.Push(3, 60);
	linkedList.Push(2, 3);
	linkedList.Pop();
	linkedList.Push(1, 55);
	linkedList.Push(5, 210);

	LinkIterator<int> linkIterator;

	for (linkIterator = linkedList.Start(); linkIterator != linkedList.End(); linkIterator++)
	{
		cout << " " << *linkIterator;
	}

	cout << endl << endl;

	return 0;
}