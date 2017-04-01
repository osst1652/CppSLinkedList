#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

#include <iostream>

namespace LinkedList{
/*
	Nod
*/
struct node 
{
	int data;
	std::string text;
	node * next; 
};

/*
	Linked list header
*/
class SLinkedList
{
private:
	node * head;
	int listLength;

public:
	//Default constructor
	SLinkedList();
	
	bool add(node* newNode, int pos);

	bool remove(int pos);

	void print();

	//Default destructor
	~SLinkedList();
};


}

#endif