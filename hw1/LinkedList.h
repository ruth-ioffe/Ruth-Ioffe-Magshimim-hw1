#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct stackNode
{
    unsigned int value;
    struct stackNode* next;
} stackNode;

stackNode* createNode(unsigned int value);
void addNode(stackNode** sHead, unsigned int newValue);
void removeNode(stackNode** sHead);
void freeList(stackNode* head);



#endif /* LINKEDLIST_H */