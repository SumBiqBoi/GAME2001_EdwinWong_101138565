#include <iostream>
#include "Header/SinglyLinkedList.h"
using namespace std;

int main()
{
	cout << "Priority Queue Singly Linked List" << endl << endl;

	LinkedList<int> linkedListInt;

	linkedListInt.Push(4, 30);
	linkedListInt.Push(8, 20);
	linkedListInt.Push(4, 55);
	linkedListInt.Pop();
	linkedListInt.Push(4, 65);
	linkedListInt.Push(4, 1);
	linkedListInt.Push(3, 60);
	linkedListInt.Push(2, 3);
	linkedListInt.Pop();
	linkedListInt.Push(5, 210);

	LinkIterator<int> linkIteratorInt;

	cout << "Pushed: 30, 20, 55, 65, 1, 60, 3, 210" << endl;
	cout << "Popped 30 because it is the first element in the list" << endl;
	cout << "Popped 3 because it is the first element in the list" << endl;
	cout << "Expected output: 60, 55, 65, 1, 210, 20" << endl;

	for (linkIteratorInt = linkedListInt.Front(); linkIteratorInt != linkedListInt.End(); linkIteratorInt++)
	{
		cout << "Priority Num: " << linkIteratorInt.GetPriority() << " " << "Data: " << *linkIteratorInt << endl;
	}

	cout << endl << endl;

	LinkedList<float> linkedListFloat;

	linkedListFloat.Push(5, 33.2);
	linkedListFloat.Push(6, 25.2);
	linkedListFloat.Pop();
	linkedListFloat.Push(1, 21.0);
	linkedListFloat.Push(3, 0.2);
	linkedListFloat.Push(3, 11.556);
	linkedListFloat.Push(5, 33.2);
	linkedListFloat.Push(6, 41.0058);
	linkedListFloat.Push(5, 3.141592);
	linkedListFloat.Pop();

	LinkIterator<float> linkIteratorFloat;

	cout << "Pushed: 33.2, 25.2, 21.0, 0.2, 11.556, 33.2, 41.0058, 3.141592" << endl;
	cout << "Popped 33.2 because it is the first element in the list" << endl;
	cout << "Popped 21.0 because it is the first element in the list" << endl;
	cout << "Expected output: 0.2, 11.556, 33.2, 3.141592, 25.2, 41.0058" << endl;

	for (linkIteratorFloat = linkedListFloat.Front(); linkIteratorFloat != linkedListFloat.End(); linkIteratorFloat++)
	{
		cout << "Priority Num: " << linkIteratorFloat.GetPriority() << " " << "Data: " << *linkIteratorFloat << endl;
	}

	cout << endl << endl;

	LinkedList<string> linkedListString;

	linkedListString.Push(3, "hope");
	linkedListString.Push(2, "Deleted");
	linkedListString.Pop();
	linkedListString.Push(1, "Removed");
	linkedListString.Push(1, "I");
	linkedListString.Pop();
	linkedListString.Push(3, "my");
	linkedListString.Push(15, "for");
	linkedListString.Push(14, "grade");
	linkedListString.Push(15, "this");
	linkedListString.Push(16, "assignment");
	linkedListString.Push(16, "is");
	linkedListString.Push(20, "good");

	LinkIterator<string> linkIteratorString;

	cout << "Pushed: hope, Deleted, Removed, I, my, for, grade, this, assignment, is, good" << endl;
	cout << "Popped Deleted because it is the first element in the list" << endl;
	cout << "Popped Removed because it is the first element in the list" << endl;
	cout << "Expected output: I, hope, my, grade, for, this, assignment, is, good" << endl;

	for (linkIteratorString = linkedListString.Front(); linkIteratorString != linkedListString.End(); linkIteratorString++)
	{
		cout << "Priority Num: " << linkIteratorString.GetPriority() << " " << "Data: " << *linkIteratorString << endl;
	}

	cout << endl << endl;


	return 0;
}