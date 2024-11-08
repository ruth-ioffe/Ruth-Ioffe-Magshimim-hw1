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
}

void cleanQueue(Queue* q)
{

}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->elements.push(newValue);
	}
}

int dequeue(Queue* q); // return element in top of queue, or -1 if empty


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
