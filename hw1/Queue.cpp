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

}

int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);