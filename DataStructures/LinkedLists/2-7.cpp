#include <iostream>
#include <stdlib.h>
#include "node.h"
// CtCI Problem 2.7 - Write a function to determine if a linked list is a palindrome.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;


void printPalindrome(Node list){

       list.printList();

       if (list.isPalindrome()){
                cout << "The above list is a palindrome!" << endl;
       }

       else {
                cout << "The above list is not a palindrome!" << endl;
       }

}


int main() { 

        // create and fill the list with 10 elements.
	Node list(3);
	Node list2(1);
	Node list3(1);

	int digits[4] = {4, 5, 6, 7};
	int digits2[4] = {2, 3, 2, 1};
	int digits3[4] = {2, 3, 3, 1};

	for (int i = 0; i < 4; ++i) {
		list.append(digits[i]);
		list2.append(digits2[i]);
		list3.append(digits3[i]);
	}

	printPalindrome(list);	
	printPalindrome(list2);
	printPalindrome(list3);


} // end main

