#include "Stack.h"
#include <iostream>

void printStack(Stack* s);

int main()
{
	Stack* s = new Stack;
	int value = 0;

	initStack(s);

	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	push(s, 5);
	printStack(s);

	std::cout << "" << std::endl;
	value = pop(s);
	if (value != -1)
	{
		std::cout << "Number Popped: " << value << std::endl;
	}
	else
	{
		std::cout << "Stack Empty!" << std::endl;
	}
	std::cout << "" << std::endl;

	printStack(s);

	std::cout << "" << std::endl;

	value = pop(s);
	if (value != -1)
	{
		std::cout << "Number Popped: " << value << std::endl;
	}
	else
	{
		std::cout << "Stack Empty!" << std::endl;
	}
	std::cout << "" << std::endl;

	printStack(s);
	std::cout << "" << std::endl;

	cleanStack(s);
	delete s;
}

void printStack(Stack* s)
{
	stackNode* curr = s->head;
	std::cout << "Current Stack: ";
	while (curr)
	{
		std::cout << curr->value << " ";
		curr = curr->next;
	}
}