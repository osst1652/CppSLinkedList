#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

#include <iostream>
#include <iterator>

template <class T> class Node {
public:
	Node();
	Node(T object);
	T getObject();
	Node* next;

private:
	T data;
};
template <class T> class LListIterator {
public:
	LListIterator(Node<T>* head);
	T next();

private:
	Node<T>* currentNode;
};

template<class T> struct SLinkedList {
public:
	SLinkedList(T initObj);
	~SLinkedList();

	void add(T add);
	void remove(int pos);
	int getSize();
	LListIterator<T> getIterator();

private:

	Node<T>* head;
	Node<T>* current;
	int size;
};


#endif