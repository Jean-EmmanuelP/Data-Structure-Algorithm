#include <stdlib.h>
#include <stdio.h>

typedef struct Node 
{
    int data;
    struct Node *next;
} t_node;

void Print(t_node *head)
{
    t_node *current = head;
    printf("List is : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

}
void Insert(t_node **head, int data, int n)
{
    t_node *temp1 = malloc(sizeof(t_node*));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = *head;
        *head = temp1;
        return ;
    }
    t_node *temp2 = *head;
    for (int i = 0; i < n - 2;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}


int main(void)
{
    t_node *head;
    head = NULL;
    Insert (&head, 2, 1); //List : 2
    Insert (&head, 3, 2); //List : 2, 3
    Insert (&head, 4, 1); //List : 4, 2, 3
    Insert (&head, 5, 1); //List : 4, 5, 2, 3
    Print(head);
}