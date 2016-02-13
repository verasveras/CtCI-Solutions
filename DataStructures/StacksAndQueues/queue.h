// Queue = First in, First out
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "node.h"

class Queue {

	private:
	Node first;
	bool empty;

	// constructors

	public:
	Queue(): empty(true) {}
	Queue(int x){
		
		first.data = x;
		first.next = nullptr;
		empty = false;
	} 
	
	

	// functions
	void enqueue(int x); // add an element to the queue
	Node dequeue(); // removed the first element from the queue
};

#endif
