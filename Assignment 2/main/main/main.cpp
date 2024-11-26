#include <iostream>
#include "Header/SinglyLinkedList.h"
using namespace std;

int main()
{
	cout << "Priority Queue Singly Linked List" << endl << endl;

	LinkedList<int> linkedList;

	linkedList.Push(4, 30);
	linkedList.Push(8, 20);
	linkedList.Push(4, 55);
	linkedList.Push(4, 65);
	linkedList.Push(4, 1);
	linkedList.Push(3, 60);
	linkedList.Push(2, 3);
	//linkedList.Pop();
	linkedList.Push(5, 210);

	LinkIterator<int> linkIterator;

	for (linkIterator = linkedList.Front(); linkIterator != linkedList.End(); linkIterator++)
	{
		cout << " " << *linkIterator;
	}

	cout << endl << endl;

	return 0;
}