#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "node.h"
// CtCI Problem 2.3 - Remove one node from linked list, given only the node to remove.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;

int main() {

	Node head(1);
	Node *node = &head; // keep a pointer to the beginning of the list

	int dupeyList[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 9; ++i) {
		head.append(dupeyList[i]);
	}


	srand(time(NULL));
	int x = rand() % 11;
	// cout << x << endl;

	for (int i = 0; i < x - 1; ++i){
		node = node->next;
	}


	head.printList();
	cout << "Deleting node " << node->data << endl;
	(*node).deleteThisNode();
	head.printList();

}