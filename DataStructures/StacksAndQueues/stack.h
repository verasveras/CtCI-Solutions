// Stack = Last in, first out
// Queue = First in, last out
#ifndef STACK_H
#define STACk_H
#include <iostream>
#include "node.h"

class Stack {

	private:
	Node top;
	bool empty;

	// constructors

	public:
	Stack(): empty(true) {}
	Stack(int x){
		
		top.data = x;
		top.next = nullptr;
		empty = false;
	} 
	

	// functions
	Node pop(); // return the last element in the stack
	void push(int x); // add an element to the stack
	void push(Node &x); // add a node to the stack
	int peek(); // find out what the data of the top node it
	
};

#endif
