#pragma once

template<typename T>
class Node
{
public:
	T info; //stores the data in the node

		Node<T>* next;
	Node<T>* previous;
};