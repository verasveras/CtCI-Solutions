#include <iostream>
#include "node.h"
// CtCI Problem 2.1 - Find Kth to last element in a singly linked list.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;


int main() {

	Node head(1);
	int dupeyList [6] = {3, 1, 2, 2, 4, 1,};

	for (int i = 0; i < 6; i++) {
		head.append(dupeyList[i]);
	}

	head.printList();

	cout << "To find the kth to last element, insert a value for K." << endl;
	int k;
	cin >> k;

	Node* kth = head.findKtoLast(k);
	cout << "The kth to last element is " << kth->data << endl;

return 0;
}