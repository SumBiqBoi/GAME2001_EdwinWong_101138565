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

private:
	int = size;
	LinkedListNode<T>* root;
	LinkedListNode<T>* lastNode;
};