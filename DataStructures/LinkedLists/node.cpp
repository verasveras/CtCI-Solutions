#include <iostream>
#include "node.h"

using std::cout;
using std::cin;
using std::endl;

class Node {

public:
	Node *next;
	int data;

	// constructor
	Node(int x) : data(x), next(nullptr) {}


	// add to the end of the list
	void append(int x) {
		Node * toAdd = new Node(x);
		Node * end = this;

		while (end->next != nullptr) {
			end = end->next;
		}

		end->next = toAdd;
	}


	// delete node that matches the data provided
	// this will delete only the first instance of the matching node
	void deleteNode(int x) {
		Node * ele = this;
		Node * prev = this; 

		bool found = false;
		while (ele->next != nullptr) {
			if (ele->data == x) {
				found = true;
				break;
			}
			prev = ele;
			ele = ele->next;
		}

		if (found) {
			prev->next = ele->next;
			delete(ele);
		}
	
	}

	
	// print the list
	void printlist() {
		Node * ele = this;

		while (ele->next != nullptr) {
			cout << ele->data << endl;
			ele = ele->next;
		}

		cout << ele->data << endl;

	}

};
