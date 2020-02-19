#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
private:
	Node<T>* current;
public:
	Iterator();
	Iterator(Node<T>* ptr);
	T operator*();
	Iterator<T> operator++();
	Iterator<T> operator--();
	bool operator==(const Iterator<T>&)const;
	bool operator!=(const Iterator<T>&)const;
};

template<typename T>
Iterator<T>::Iterator()
{

}

template<typename T>
Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

template<typename T>
T Iterator<T>::operator*()
{
	return current->info;
}

template<typename T>
Iterator<T> Iterator<T>::operator++() // goes to the next node
{
	current = current->next;
}

template<typename T>
Iterator<T> Iterator<T>::operator--() //goes to previous node
{
	current = current->previous;
}

template<typename T>
 bool Iterator<T>::operator==(const Iterator<T>& temp) const
{
	if (current->info == temp.current->info)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
 bool Iterator<T>::operator!=(const Iterator<T>& temp) const
{
	if (current->info != temp.current->info)
	{
		return true;
	}
	else
	{
		return false;
	}
}
