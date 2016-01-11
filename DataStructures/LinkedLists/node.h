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
	void append(int x); // append a node to the end of a list
	void deleteNode(int x); // delete one node, the first node in the list that matches the data
	void printList(); // print the list.
	void deleteDupes();
	Node* deleteNodes(int x); // delete Nodes that all match a given data 
	Node* findKtoLast(int x); // find and return the kth to last element in a list.
	void deleteThisNode(); // delete a node in a list, given only the node

};