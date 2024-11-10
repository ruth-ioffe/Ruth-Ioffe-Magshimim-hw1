#include "Queue.h"
#include <iostream>

void printQueue(Queue* q);

int main()
{
	Queue* q = new Queue;
	int number = 0;

	initQueue(q, 5);
	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	enqueue(q, 4);
	enqueue(q, 5);
	printQueue(q);
	number = dequeue(q);
	if (number != -1)
	{
		std::cout << "Number removed: " << number << std::endl;
	}
	else
	{
		std::cout << "Queue Empty!" << std::endl;
	}
	std::cout << "" << std::endl;
	printQueue(q);
}

void printQueue(Queue* q)
{
	int i = 0;
	std::cout << "the current queue: ";

	for (i = 0; i < q->count; i++)
	{
		std::cout << q->elements[i] << " ";
	}
	std::cout << "" << std::endl;
}