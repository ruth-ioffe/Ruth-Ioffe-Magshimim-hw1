#include "LinkedList.h"
#include <iostream>


stackNode* createNode(unsigned int value)
{
    stackNode* newNode = new stackNode;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void addNode(stackNode** sHead, unsigned int newValue)
{
    stackNode* newNode = createNode(newValue);
    newNode->next = *sHead;
    *sHead = newNode;
}

void removeNode(stackNode** sHead)
{
    stackNode* temp = *sHead;
    *sHead = (*sHead)->next;
    delete temp;
    temp = NULL;

}

void freeList(stackNode* head)
{
    stackNode* temp = NULL;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete(temp);
    }
}

