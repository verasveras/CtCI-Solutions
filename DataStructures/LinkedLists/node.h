#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Node {

public:
	Node *next;
	int data;

	// constructor
	Node(int x) : data(x), next(nullptr) {}

	// operators
	Node& operator= (const Node& y);
	
	// functions
	void append(int x);
	void deleteNode(int x);
	// void deleteNodes(int x);
	void printList();
	void deleteDupes();
	Node* deleteNodes(int x);
	Node* findKtoLast(int x);

};