#include "Utils.h"
#include "Stack.h"
#include <iostream>
using namespace std;

void reverse(int* nums, unsigned int size)
/*this function reverses the array's numebrs
input: int* nums (the array), unsigned int size (the size of the array)
output: none
*/
{
	int i = 0;
	Stack* reverseTool = new Stack;
	initStack(reverseTool);
	for (i = 0; i < size; i++)
	{
		push(reverseTool, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(reverseTool);
	}
	cleanStack(reverseTool);
	delete reverseTool;
}

int* reverse10()
/*
this function gets from client 10 numbers and puts it in an array, then it reverses it and returns
input: none
output: none
*/
{
	unsigned int size = 10;
	int* reverseArr = new int[size];
	int i = 0;
	
	for (i = 0; i < size; i++)
	{
		std::cout << "enter a number to the array: ";
		std::cin >> reverseArr[i];
	}
	reverse(reverseArr, size);
	return reverseArr;
}
