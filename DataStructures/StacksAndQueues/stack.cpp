#include "node.h"
#include "stack.h"

Node Stack::pop(){

	Node popped = top;
	top = *(top.next);	
	
	return popped;
}

void Stack::push(int x){

	if (empty){
		top.data = x;
		top.next = nullptr;
		empty = false;
	}

	else {
	Node oldTop;
	oldTop.data = top.data;
	oldTop.next = top.next;

	top.data = x;
	top.next = &oldTop;

	}

}

/*
void Stack::push(Node &x){

	x.next = &top;
	top = x;

}*/

int Stack::peek(){

	return top.data;

}
