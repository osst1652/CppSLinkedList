#include "SLinkedList.h"
using namespace std;
using namespace LinkedList;

int main() {

	//create nodes

	node * A = new node;
	A->text = "text 1";
	A->data = 1;

	node * B = new node;
	B->text = "text 2";
	B->data = 2;

	node * C = new node;
	C->text = "text 3";
	C->data = 3;

	node * D = new node;
	D->text = "text 4";
	D->data = 4;

	node * E = new node;
	E->text = "text 5";
	E->data = 5;

	node * F = new node;
	F->text = "text 6";
	F->data = 6;
	cout << "------------------------------" << endl;
	//add nodes to list
	cout << "------------------------------" << endl;
	SLinkedList myList;
	cout << "------------------------------" << endl;

	myList.add(A, 1);
	myList.add(B, 2);
	myList.add(C, 3);
	myList.add(D, 4);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	//print current list
	myList.print();
	cout << "------------------------------" << endl;
	cout << "add data E in position 2" << endl;
	myList.add(E, 2);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	myList.print();
	cout << "------------------------------" << endl;
	cout << "add data F in position 1" << endl;
	myList.add(F, 1);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	myList.print();
	cout << "------------------------------" << endl;
	cout << "remove position 6" << endl;
	myList.remove(6);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	myList.print();
	cout << "------------------------------" << endl;
	cout << "remove position 1" << endl;
	myList.remove(1);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	myList.print();
	cout << "------------------------------" << endl;
	cout << "remove position 1" << endl;
	myList.remove(3);
	cout << "------------------------------" << endl;
	cout << "Print current list" << endl;
	myList.print();


	cout << "end of list" << endl;
	return 0;
}