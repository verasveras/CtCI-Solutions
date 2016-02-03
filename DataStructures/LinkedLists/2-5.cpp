#include <iostream>
#include <stdlib.h>
#include "node.h"
// CtCI Problem 2.4 - Write a function to partition a linked list around value X.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;


int main() { 

        // create and fill the list with 10 elements.
	Node summand1(3);
	Node summand2(5);

	int digits1[4] = {4, 5, 6, 7};
	int digits2[4] = {2, 9, 8, 6};

	for (int i = 0; i < 4; ++i) {
		summand1.append(digits1[i]);
		summand2.append(digits2[i]);
	}

	summand1.printList();
        summand2.printList();

	Node *sum = new Node();
        add (&summand1, &summand2, sum, 0);
	(*sum).printList();
	
 

} // end main

