#pragma once
#include "Node.h"
class Iterator
{
private:
	Node* current;
public:
	Iterator();
	Iterator(Node* ptr);
	T operator*();
	Iterator operator++();
	Iterator operator--();
	bool operator==(const Iterator<T>&)const;
};