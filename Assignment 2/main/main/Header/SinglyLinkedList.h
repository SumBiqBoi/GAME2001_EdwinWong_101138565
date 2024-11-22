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

	void Push(T newData)
	{
		LinkedListNode<T>* newNode = new LinkedListNode<T>;

		assert(newNode != nullptr);
		newNode->data = newData;
		newNode->next = nullptr;

		// Find position of where the priority needs to go
		// Place the priority node in the correct spot
	}

private:
	int size;
	LinkedListNode<T>* root;
	LinkedListNode<T>* lastNode;
};