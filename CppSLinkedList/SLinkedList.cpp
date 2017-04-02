#include "SLinkedList.h"

template <class T> Node<T>::Node() {};
template <class T> Node<T>::Node(T d) { data = d; }
template <class T> T Node<T>::getObject() { return data; }

template<class T> LListIterator<T>::LListIterator(Node<T>* head) {
	currentNode = head;
}

template<class T> T LListIterator<T>::next() {
	Node<T>* temp = currentNode;

	currentNode = currentNode->next;

	return currentNode->getObject();

};

/*
	Konstruktor & destruktor
*/

template <class T> SLinkedList<T>::SLinkedList(T init) {
	head = new Node<T>;

	current = new Node<T>(init);
	head->next = current;

	current->next = head;

	size = 1;
};

template <class T> SLinkedList<T>::~SLinkedList() {
	for (int i = 0; i < size; i++) {
		Node<T>* temp = head->next;
		head->next = head->next->next;
		delete temp;
	}
	delete head;
}

//Add
//Linked head for circular 
template <class T> void SLinkedList<T>::add(T data) {
	Node<T>* temp = current;

	current->next = new Node<T>(data);
	current = current->next;
	current->next = head;

	size += 1;
}

//Remove
//Param pos is the node to remove

template<class T> void SLinkedList<T>::remove(int pos) {
	if (pos <= 0) {
		std::cerr << "Out of range to remove"
	}
	else if (size > 0 && pos <= size) {
		Node<T>* temp = head;
		for (int i = 0; i < pos + 1; i++) {
			temp = temp->next;
		}
		delete temp->next;
		temp->next = temp->next->next;
		size -= 1;
	}
	else if (size > 0 && pos > size) {
		std::cerr << "List does not have " << pos << " elements.\n";
	}
	else if (size == 0) {
		std::cerr << "Empty list \n";
	}
}

template<class T> int SLinkedList<T>::getSize() {
	return size;
}

template<class T> LListIterator<T> SLinkedList<T>::getIterator() {
	return LListIterator<T>(head);
}