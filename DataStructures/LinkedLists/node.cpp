#include <iostream>
#include "node.h"

using std::cout;
using std::cin;
using std::endl;

// assignment operator
Node& Node::operator= (const Node& y) {

	this->data = y.data;
	this->next = y.next;
	return *this;
}


// add to the end of the list
void Node::append(int x) {
	Node * toAdd = new Node(x);
	Node * end = this;

	while (end->next != nullptr) {
		end = end->next;
	}

	end->next = toAdd;
}


// delete node that matches the data provided
void Node::deleteNode(int x) {

	// first node check
	if (this->data == x) {
		(*this) = *(this->next);
		return;
	}

	Node* ele = this;
	Node* prev = this;

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


/*
// delete all notes that match the data provided
void Node::deleteNodes(int x) {

	Node * prev = nullptr;
	Node * curr = this;

	// check to see if any of the initial elements match the data
	while (this->data == x) {
		(*this) = *(this->next);
	}

	prev = this;
	curr = this->next;

	// at this point we know that the node pointed to by prev does have X as data.
	while (curr != nullptr) {
		if (curr->data == x) {
			prev->next = curr->next;
		}

		prev = curr;
		curr = curr->next;

	}

} 
*/

// delete all notes that match the data provided
Node* Node::deleteNodes(int x) {

	Node * prev = nullptr;
	Node * curr = this;

	// check to see if any of the initial elements match the data
	while (this->data == x) {
		(*this) = *(this->next);
	}

	Node * toReturn = this;

	prev = this;
	curr = this->next;

	// at this point we know that the node pointed to by prev does have X as data.
	while (curr != nullptr) {
		if (curr->data == x) {
			prev->next = curr->next;
		}

		prev = curr;
		curr = curr->next;

	}

	return toReturn;

}



// print the list
void Node::printList() {
	Node* ele = this;

	while (ele->next != nullptr) {
		cout << ele->data << " ";
		ele = ele->next;
	}

	cout << ele->data << endl;

}


// delete duplicates of Nodes
void Node::deleteDupes() {

	Node* list = this;
	Node* curr;

	int data = list->data;
	while (list != nullptr) {



	}

}



// find the kth to Last element.
Node* Node::findKtoLast(int x) {

	if (this == nullptr) return nullptr;
	Node* curr = this;

	int count = 1;
	int k = 0;

	while (curr != nullptr) {
		curr = curr->next;
		++ count;
	}

	k = count - x;
	count = 1;
	curr = this;

	while (count < k) {
		curr = curr->next;
		++count;
	}

	return curr;
}



// delete the node the function is called on
void Node::deleteThisNode() {

	Node* curr = this;

	if (curr->next == nullptr) {
		cout << "This function does not delete the last element in a list!" << endl;
		return;
	}
	
	while (curr->next != nullptr && ((curr->next)->next) != nullptr) {
		curr->data = (curr->next)->data;
		curr = curr->next;
	}

	curr->data = (curr->next)->data;
	curr->next = nullptr;
	

}



// partition the list around a node
Node* Node::partition(int x){

        if (this == nullptr) 
		return nullptr;

	Node* list = this;
	Node* small = nullptr; // list of elements < X
	Node* big = nullptr; // list of elements >= x
	Node* partitioned = nullptr; // final list to return;

	while (list != nullptr){
		
		if (list->data < x) {
			if (small == nullptr)
				small = new Node(list->data);
			else
				(*small).append(list->data);
		} 

		else if (list->data >= x) {
			if (big == nullptr)
				big = new Node (list->data);
			else
				(*big).append(list->data);
	
	
		}
	
		list = list->next; 

	}

	partitioned = small;
	while (small->next != nullptr){
		small = small->next;
	}

	small->next = big;


	return partitioned;

}



void add (Node* summand1, Node* summand2, Node* sumNode, int oldre) {

	int sum = (summand1->data) + (summand2->data) + oldre;
	int remainder = 0;

	if (sum > 9){
		remainder = 1;
		sum -= 10;

	}
        
        sumNode->data = sum;
        Node* nextSum = new Node();
	sumNode->next = nextSum;

        Node * next1 = summand1->next;
	Node * next2 = summand2->next;
	
	if (next1 != nullptr && next2 !=nullptr){
		add (next1, next2, nextSum, remainder);
	}

	else if (remainder == 1) {
		nextSum->data = 1;	
	}
	
	else if (remainder == 0){
		sumNode->next = nullptr;
	}

}



Node Node::reverse(){
	
	Node* curr = this;
	Node* prev = nullptr;
	Node* tmp = nullptr;	

	while (curr != nullptr){
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
			
	}

	return *prev;
}


// copy list
Node Node::copy(){

	
	Node* curr = this;
	Node newList(curr->data);
	curr = curr->next;

	while (curr!= nullptr){
		newList.append(curr->data);
		curr = curr->next;
	}

	return *curr;
}

// bool Node::isPalindrome(){}
