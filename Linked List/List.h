#pragma once
#include "Node.h"
#include "Iterator.h"



template<typename T>
class List
{
protected:
	int m_count;
		Node<T>* m_first;
	Node<T>* m_last;

public:
	void initializeList();
	bool isEmptyList();
	int length();
	T front();
	Iterator<T> begin();
	Iterator<T> end();

		T back();
	
		virtual bool search(const T&) = 0;
		virtual void insertFirst(const T&) = 0;
		virtual void insertLast(const T&) = 0;
		virtual void deleteNode(const T&) = 0;

		bool isEmpty();
};

template<typename T>
T List<T>::front()
{
	return m_first;
}

template<typename T>
Iterator<T> List<T>::begin()
{
	return Iterator<T>(m_first);
}

template<typename T>
Iterator<T> List<T>::end()
{
	return Iterator<T>(m_last);
}

template<typename T>
T List<T>::back()
{
	return m_last;
}

template<typename T>
bool List<T>::isEmpty()
{
	if (m_first == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
