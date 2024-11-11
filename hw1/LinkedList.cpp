#include "LinkedList.h"
#include <iostream>


stackNode* createNode(unsigned int value)
/*
this function creates a new node
input: unsigned int value, the number that is going to be in the node
ouput: none
*/
{
    stackNode* newNode = new stackNode;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void addNode(stackNode** sHead, unsigned int newValue)
/*
this function adds a new node to the linked list
input: stackNode** sHead, a pointer to the pointer of the head of the linked list.
unsigned int newValue, the number that is going to be in the node
ouput: none
*/
{
    stackNode* newNode = createNode(newValue);
    newNode->next = *sHead;
    *sHead = newNode;
}

void removeNode(stackNode** sHead)
/*
this function removes a node
input: stackNode** sHead, a pointer to the pointer of the head of the linked list
ouput: none
*/
{
    stackNode* temp = *sHead;
    *sHead = (*sHead)->next;
    delete temp;
    temp = NULL;

}

void freeList(stackNode* head)
/*
this function releses the linked list
input: stackNode** sHead, a pointer to the pointer of the head of the linked list
ouput: none
*/
{
    stackNode* temp = NULL;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete(temp);
    }
}

