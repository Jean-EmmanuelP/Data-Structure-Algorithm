#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *link;
};

struct Node *top = NULL;

/* The goal of this function is to add an element at the top of the node */
void Push(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = x;
    temp->link = top;
    top = temp;
}


/*The goal of this function is to withdraw the first element of the node */
void Pop()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    if (top == NULL)
        return;
    temp = top;
    top = top->link;
    free(temp);
}