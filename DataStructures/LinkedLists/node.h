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
	Node() : data(), next(nullptr){}

	// operators
	Node& operator= (const Node& y);
	
	// functions
	void append(int x); // append a node to the end of a list
	void deleteNode(int x); // delete one node, the first node in the list that matches the data
	void printList(); // print the list.
	void deleteDupes(); // delete nodes with duplicate data
	Node* deleteNodes(int x); // delete Nodes that all match a given data 
	Node* findKtoLast(int x); // find and return the kth to last element in a list.
	Node* partition(int x);
	void deleteThisNode(); // delete a node in a list, given only the node
	Node reverse(); // reverse a list, returns the head of the new list.
	Node copy(); // copy a list

};

	void add (Node* summand1, Node* summand2, Node* sum, int oldre);
