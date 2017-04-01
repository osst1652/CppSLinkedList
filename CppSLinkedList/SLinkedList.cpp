#include "SLinkedList.h"

using namespace std;
namespace LinkedList {

	//Default constructor to create list
	SLinkedList::SLinkedList()
	{
		head->text = "head (contains no info)";
		head->data = NULL;
		head->next = NULL;
		listLength = 0;

	}

	bool SLinkedList::add(node* newNode, int pos) 
	{
		//OutOufBounds
		if ((pos <= 0) || (pos > listLength + 1)) 
		{
			cerr << "Add error: param pos out of range" << endl;
			return false;
		}
		//If next is null, make a new node in next
		if (head->next == NULL) 
		{
			head->next = newNode;
			listLength++;
			return true;
		}
		int count = 0;
		node * current = head;
		node * currentNext = head;
		while (currentNext) 
		{
			if (count == pos) 
			{
				current->next = newNode;
				newNode->next = currentNext;
				listLength++;
				return true;
			}
			current = currentNext;
			currentNext = current->next;
			count++;
		}
		if (count == pos) 
		{
			current->next = newNode;
			newNode->next = currentNext;
			listLength++;
			return true;
		}
		cerr << "Add Error: node was not added to list" << endl;
		return false;
	}

	//removes target node
	//True if successful, false if not removed
	bool SLinkedList::remove(int pos) 
	{
		if ((pos == 0) || (pos > listLength + 1)) 
		{
			cerr << "Remove error: param position out of range" << endl;
			return false;
		}
		if(head->next == NULL)
		{
			cerr << "Remove error: nothing to remove";
			return false;
		}
		int count = 0;
		node * current = head;
		node * currentNext = head;
		while (currentNext) 
		{
			//If position found
			if (count == pos) 
			{
				//Remove the link to the node
				current->next = currentNext->next;
				delete currentNext;
				listLength--;
				return true;
			}
			current = currentNext;
			currentNext = current->next;
			count++;
		}
		cerr << "Remove error: nothing was removed from the list" << endl;
		return false;
	}

	void SLinkedList::print() 
	{
		int count = 0;
		node * current = head;
		node * currentNext = head;
		cout << "-" << endl;
		while (currentNext) 
		{
			current = currentNext;
			cout << "Current position: " << count << endl;
			cout << "current data: " << current->data << endl;
			cout << "current text: " << current->text << endl;

			currentNext = current->next;
			count++;
		}
	}

	//Destructor
	//de-allocates memory
	SLinkedList::~SLinkedList()
	{
		node * current = head;
		node * currentNext = head;
		while (currentNext) 
		{
			current = currentNext;
			currentNext = current->next;
			if (currentNext) delete current;
		}
	}


}
