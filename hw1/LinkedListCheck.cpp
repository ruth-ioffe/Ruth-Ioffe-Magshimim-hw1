#include "LinkedList.h"
#include <iostream>

void printList(stackNode* head);

int main()
{
    stackNode* newList = new stackNode;
    addNode((&newList), 1);
    addNode((&newList), 2);
    addNode((&newList), 3);
    addNode((&newList), 4);
    addNode((&newList), 5);

    printList(newList);
    removeNode(&newList);
    printList(newList);
    addNode((&newList), 7);
    printList(newList);
    freeList(newList);

}

void printList(stackNode* head)
{
    stackNode* curr = head;
    while (curr != NULL)
    {
        std::cout << curr->value << "\n" << std::endl;
        curr = curr->next;
    }
}