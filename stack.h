#ifndef H_STACK
#define H_STACK
#include<iostream>
using namespace std;
#include <string>
#include "node.h"

class stackb
{
private:
	Node *top;
public:
	stackb();
	bool isempty(); //checks if the stack is empty
	void push(int n); //adds to the stack 
	void pop(); //deletes off the top of the stack 
	void deleteall(); //deletes the entire stack 
	int peek()const; //this is the top function 
	void print();
};

stackb::stackb()
{
	top = nullptr;
}

bool stackb::isempty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void stackb::push(int n) {
	Node *temp;
	temp = new Node(); //make a new node

	temp->n1 = n; //value is set to whatever we are passing 
	temp->next = top;
	top = temp; //set the top to point to the temp(which is the new node created)
}

void stackb::pop()
{
	//when popping you only pop from the top 
	Node *temp;

	if (top != NULL) { //if the stack isnt empty 
		temp = top; //set temp = to the top of the stack 
		top = temp->next; //move the top to the next node (which is going down) 
		delete temp;
	}
	else
		cout << "Cannot remove from an empty stack";
}
void stackb::deleteall()
{
	Node *temp;
	while (top != nullptr)//while the stack isnt empty
	{
		temp = top; //set temp=top of the stack
		top = temp->next; //the top is the next element in the stack 
		delete temp;
	}
}

int stackb::peek() const {//this is the top 
	if (top == NULL)
		return NULL;
	return top->n1;
}
void stackb::print() {
	Node *temp;
	temp = top;
	while (temp != NULL)
	{
		cout << temp->n1 << endl;
		temp = temp->next;
	}
}
#endif // !H_STACK
