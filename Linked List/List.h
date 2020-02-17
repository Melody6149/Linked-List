#pragma once
#include"Node.h"



template<typename T>
class List
{
protected:
	int m_count;
		Node<T>* m_first;
	Node<T>* m_last;

public:
	T front();

		T back();
	
	
		virtual void insertfirst(const T&);
	
		void insertLast(const T&);

		bool isEmpty();
};

template<typename T>
T List<T>::front()
{
	return m_first;
}

template<typename T>
T List<T>::back()
{
	return m_last;
}

template<typename T>
void List<T>::insertfirst(const T &)
{
}

template<typename T>
void List<T>::insertLast(const T &)
{
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
