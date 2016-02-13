#include "node.h"
#include "queue.h"

void Queue::enqueue (int x){
	if (empty){
		first.data = x;
		first.next = nullptr;
		empty = false;
	}

	else {
		first.append(x);
	}
}

Node Queue::dequeue () {
	Node removed = first;

	if (first.next == nullptr) {
		empty = true;	
		// first = * (first.next);
	}

	else {
	first = *(first.next);
	}

}
