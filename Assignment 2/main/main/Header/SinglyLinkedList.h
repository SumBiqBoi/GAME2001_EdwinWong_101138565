#pragma once
#include <cassert>

template <class T>
class LinkedListNode
{
public:
	int priority;
	LinkedListNode* data;
	LinkedListNode* next;
};

template <class T>
class LinkedList
{
public:
	LinkedList(): size(0), root(nullptr), lastNode(nullptr) {}
	~LinkedList() {}

	LinkedListNode<T>* Start()
	{
		assert(root != nullptr);
		return root;
	}
	LinkedListNode<T>* End()
	{
		return nullptr;
	}
	LinkedListNode<T>* Last()
	{
		assert(lastNode != nullptr);
		return lastNode;
	}

	void Pop()
	{
		assert(root != nullptr);

		if (root->next == nullptr)
		{
			delete root;
			root = nullptr;
			lastNode = nullptr;
		}
		else
		{
			LinkedListNode<T>* tempNode;
			tempNode = root;
			root = root->next;
			delete tempNode;
			tempNode = nullptr;
		}
		size = (size == 0 ? size : size - 1);
	}

	void Push(int newPriority, T newData)
	{
		LinkedListNode<T>* newNode = new LinkedListNode<T>;
		LinkedListNode<T>* currentNode = root;
		LinkedListNode<T>* tempNode = nullptr;

		assert(newNode != nullptr);
		newNode->data = newData;
		newNode->next = nullptr;
		newNode->priority = newPriority;

		// Need to compare to nodes already in the linked list
		while (newNode->priority > currentNode->priority && newNode != nullptr)
		{
			tempNode = currentNode;
			currentNode = currentNode->next;
		}
		// Insert newNode here and move everything else down
		tempNode->next = newNode;
		newNode->next = current;
		
		if (current == nullptr)
		{
			lastNode = newNode;
		}
		size++;
	}

private:
	int size;
	LinkedListNode<T>* root;
	LinkedListNode<T>* lastNode;
};