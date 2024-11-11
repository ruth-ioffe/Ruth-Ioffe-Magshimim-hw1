#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
/*
this function adds a number to the top od the stack
input: Stack* s (the stack), unsigned int element (the number)
output: none
*/
{
	addNode((&s->head), element);
}

int pop(Stack* s)
/*
this function pops out the number at the top of the stack and returns it
input: Stack* s (the stack)
output: none
*/
{
	int value = 0;
	if (s->head)
	{
		value = s->head->value;
		removeNode(&s->head);
		return value;
	}
	else
	{
		return -1;
	}
}

void initStack(Stack* s)
/*
this function initialize the stack
input: Stack* s (the stack)
output: none
*/
{
	s->head = NULL;
}

void cleanStack(Stack* s)
/*
this function cleans the stack
input: Stack* s (the stack)
*/
{
	freeList(s->head);
}

bool isEmpty(Stack* s)
/*
thid function checks if the stackk is empty
input: Stack* s
output: true or false
*/
{
	if (!s->head)
	{
		return true;
	}
	return false;
}


bool isFull(Stack* s)
/*
thid function checks if the stack is full
input: Stack* s
output: true or false
*/
{
	return false; //there is no max size, so always false. (it was included in the header file)
}
