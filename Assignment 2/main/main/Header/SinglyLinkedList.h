#pragma once
#include <cassert>

template <class T>
class LinkedListNode
{
public:
	int priority;
	T data;
	LinkedListNode* next;
};

template <class T>
class LinkIterator 
{
public:
	LinkIterator()
	{
		iteratingNode = nullptr;
	}
	~LinkIterator() {}

	T& operator*()
	{
		assert(iteratingNode != nullptr);
		return iteratingNode->data;
	}
	void operator=(LinkedListNode<T>* node)
	{
		iteratingNode = node;
	}
	void operator++(int)
	{
		assert(iteratingNode != nullptr);
		iteratingNode = iteratingNode->next;
	}
	bool operator!=(LinkedListNode<T>* node)
	{
		return (iteratingNode != node);
	}
	bool operator==(LinkedListNode<T>* node)
	{
		return (iteratingNode == node);
	}
private:
	LinkedListNode<T>* iteratingNode;
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

		if (root == nullptr)
		{
			root = newNode;
			lastNode = newNode;
			size++;
			return;
		}
		// Need to compare to nodes already in the linked list
		while (currentNode != nullptr && newNode->priority > currentNode->priority)
		{
			tempNode = currentNode;
			currentNode = currentNode->next;
		}
		if (tempNode == nullptr)
		{
			newNode->next = root;
			root = newNode;
		}
		else
		{
			tempNode->next = newNode;
			newNode->next = currentNode;

			if (currentNode == nullptr)
			{
				lastNode = newNode;
			}
		}
		size++;
	}

	void Front()
	{
		
	}

private:
	int size;
	LinkedListNode<T>* root;
	LinkedListNode<T>* lastNode;
};