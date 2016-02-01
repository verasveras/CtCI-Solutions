#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "node.h"
// CtCI Problem 2.4 - Write a function to partition a linked list around value X.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;


int main() { 

        // create and fill the list with 10 elements.
	Node head(1);
	Node *node = &head; // keep a pointer to the beginning of the list

	// int dupeyList[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
	int dupeyList[9] = {2, 9, 8, 6, 10, 3, 7,  4, 5};

	for (int i = 0; i < 9; ++i) {
		head.append(dupeyList[i]);
	}

	head.printList();
        
        // select a value to partiton the list around
 	int x;
	cout << "Insert value to partition list around:" << endl;
	cin >> x;
	
	Node* newList = head.partition(x);
	(*newList).printList(); 

} // end main

