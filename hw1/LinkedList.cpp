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
    stackNode* current = *sHead;
    if (!*sHead)
    {
        *sHead = newNode;
    }
    else
    {
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void removeNode(stackNode** sHead)
{
    stackNode* temp = *sHead;
    if ((*sHead)->next == NULL)
    {
        delete(*sHead);
    }
    else
    {
        while (temp->next)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }

}

