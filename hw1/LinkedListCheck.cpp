#include "LinkedList.h"
#include <iostream>

void printList(stackNode* head);

int main()
{
    stackNode* newList = NULL;
    addNode((&newList), 1);
    addNode((&newList), 2);
    addNode((&newList), 3);
    addNode((&newList), 4);
    addNode((&newList), 5);
    printList(newList);
    std::cout << "   " << std::endl;
    removeNode(&newList);
    printList(newList);
    std::cout << "   " << std::endl;
    addNode((&newList), 7);
    printList(newList);
    freeList(newList);
    

}

void printList(stackNode* head)
{
    stackNode* curr = head;
    while (curr)
    {
        std::cout << curr->value << std::endl;
        curr = curr->next;
    }
}