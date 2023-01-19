#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* next;
}   node;

void Insert(int x, node **head)
{
    node *temp;
    temp = malloc(sizeof(node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
        temp->next = *head;
    *head = temp;
}

void Print(node *head)
{
    node *current = head;
    printf("List is : ");
    while (current != NULL)
    {
        printf("[%d]", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(void)
{
    node *head;

    head = NULL; // empty list;
    printf("How many numbers ?\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x, &head);
        Print(head);        
    }
}