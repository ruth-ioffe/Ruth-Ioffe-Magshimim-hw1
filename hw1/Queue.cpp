#include "Queue.h"
#include <iostream>




void initQueue(Queue* q, unsigned int size)
/*
this function intializes the queue
input: Queue* q, unsigned int size
output: none
*/
{
	q->elements = new unsigned int[size];
	q->maxSize = size;
	q->count = 0;
	q->removed = 0;
}

void cleanQueue(Queue* q)
/*
this funciton cleans the queue
input: Queue* q (the queue)
output: none
*/
{
	delete[] q->elements;
	q->count = 0;
	q->maxSize = 0;
	q->removed = 0;
}

void enqueue(Queue* q, unsigned int newValue)
/*
this function inserts a number into the array
input: Queue* q, unsigned int newValue
output: none
*/
{
	if (!isFull(q))
	{
		q->elements[(q->removed + q->count) % q->maxSize] = newValue;
		q->count++;
	}
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	unsigned int firstOut = 0;
	if (isEmpty(q))
	{
		return -1;
	}
	else
	{
		firstOut = q->elements[q->removed % q->maxSize];
		q->elements[q->removed % q->maxSize] = NULL;
		q->removed++;
		q->count--;
		return firstOut;
	}
}

bool isEmpty(Queue* s)
/*
this function checks if the queue is empty
input: Queue* s
output: true or false (if the queue is empty or not)
*/
{
	if (s->count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Queue* s)
/*
this function checks if the queue is full
input: Queue* s
output: true or false (if the queue is full or not)
*/
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

