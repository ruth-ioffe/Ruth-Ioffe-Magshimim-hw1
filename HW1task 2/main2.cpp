#include "Stack.h"
#include "Utils.h"
#include <iostream>

void checkStack();
void checkUtils();

void printStack(Stack* s);
void printArr(int* nums, unsigned int size);
/*
int main()
{
	checkStack();
	checkUtils();
}
*/

void checkStack()
/*
this funciton checks the Stack functions
input: none
input: none
*/
{
	Stack* s = new Stack;
	int value = 0;

	std::cout << "Stack func test:" << std::endl << std::endl;

	initStack(s);

	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	push(s, 5);
	printStack(s);

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

	cleanStack(s);
	delete s;
}
void checkUtils()
/*
this funciton checks the utils functions
input: none
input: none
*/
{
	int* nums = new int;
	unsigned int size = 5;

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	nums[4] = 5;

	std::cout << "Reveres func test:" << std::endl << std::endl;

	printArr(nums, size);

	reverse(nums, size);

	printArr(nums, size);

	std::cout << "Reveres10 func test:" << std::endl << std::endl;

	nums = reverse10();
	size = 10;
	printArr(nums, size);

	delete[] nums;
}

void printStack(Stack* s)
/*
this funciton prints the stack
input: Stack* s (the stack)
output: none
*/
{
	stackNode* curr = s->head;
	std::cout << "Current Stack: ";
	while (curr)
	{
		std::cout << curr->value << " ";
		curr = curr->next;
	}
	std::cout << std::endl;
}
void printArr(int* nums, unsigned int size)
/*
this funciton prints the array
input: int* nums (the array), unsigned int size
output: none
*/
{
	int i = 0;
	std::cout << "Current Arrey: ";
	for (i = 0; i < size ; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;
}