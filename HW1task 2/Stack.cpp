#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	addNode((&s->head), element);
}

int pop(Stack* s)
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
{
	s->head = NULL;
}

void cleanStack(Stack* s)
{
	freeList(s->head);
}

bool isEmpty(Stack* s)
{
	if (!s->head)
	{
		return true;
	}
	return false;
}

/*
bool isFull(Stack* s)
{
	return false; //there is no max size, so always false.
}
*/