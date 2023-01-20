#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}                       t_node;


void InsertList(t_node **head, int data, int n)
{
    t_node *newNode = *head;
    t_node *currentNode = *head;
    newNode = malloc(sizeof(t_node *));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (n == 1)
    {
        newNode->next = *head;
        *head = newNode;
        return ;
    }
    for (int i = 0; i < n - 2; i++)
    {
        currentNode->prev = currentNode;
        currentNode = currentNode->next;
    }
    newNode->prev = currentNode;
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

void PrintList(t_node *head)
{
    t_node *current = head;
    printf("The list is : ");
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void Top(t_node **head)
{
    t_node *current = *head;
    while (current->next)
    {
        current->prev = current;
        current = current->next;
    }
    printf("prev %d", current->prev->data);
    printf(" current %d", current->data);
}

void Pop(t_node **head)
{
}

void Reverse(t_node **head)
{
}

int main(void)
{
    t_node *head = NULL;
    InsertList(&head, 1, 1);
    InsertList(&head, 2, 2);
    InsertList(&head, 3, 3);
    InsertList(&head, 4, 4);
    InsertList(&head, 5, 5);
    PrintList(head);
    Reverse(&head);
    PrintList(head);
    Top(&head);
}