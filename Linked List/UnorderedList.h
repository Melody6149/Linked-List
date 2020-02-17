#pragma once
#include "List.h";
#include "Node.h";
template<typename T>
class UnorderedList : List<T>
{
public:
	void insertFirst(const T&);
	void insertLast(const T&);
};

template<typename T>
void UnorderedList<T>::insertFirst(const T & tempinfo)
{
	Node<T>* node = new Node<T>;
	node->info = tempinfo;
	if (this->isEmpty())
	{
		this->m_first = node;
		this->m_last = node;
		this->m_count++;
		return;
	}
		node->next = this->m_first;
		this->m_first->previous = node;
		this->m_first = node;
		this->m_count++;
}

template<typename T>
void UnorderedList<T>::insertLast(const T & tempinfo)
{
	Node<T>* node = new Node<T>;
	node->info = tempinfo;
	if (this->isEmpty())
	{
		this->m_first = node;
		this->m_last = node;
		this->m_count++;
		return;
	}
	node->previous = this->m_last;
	this->m_last->next = node;
	this->m_last = node;
	this->m_count++;
}
