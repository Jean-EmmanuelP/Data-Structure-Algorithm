#include <stdlib.h>
#include <stdio.h>

typedef struct Node 
{
    int data;
    struct Node *next;
} t_node;

void Insert(t_node **head, int data, int n)
{
    t_node *current = *head;
    current = malloc(sizeof(t_node *));
    current->data = data;
    current->next = NULL;
    if (n == 1)
    {
        current->next = *head;
        *head = current;
        return ;
    }
    t_node *current_2 = *head;
    for (int i = 0; i < n - 2; i++)
        current_2 = current_2->next;
    current->next = current_2->next;
    current_2->next = current;
}

void Print(t_node *current)
{
    t_node *head = current;
    while (current)
    {
        printf("%d", current->data);
        current = current->next;
    }
}

void Delete(t_node **current, int n)
{
    t_node *head = *current;
    t_node *del_node;

    if (n == 1)
    {
        *current = head->next;
        free(head);
        return ;
    }
    for (int i = 0; i < n - 2; i++)
        head = head->next;
    del_node = head->next;
    head->next = del_node->next;
    free(del_node);
}

void Delete_Value(t_node **head, int data)
{
    t_node *current = *head;
    t_node *prev = *head;

    if (current->data == data)
    {
        *head = current->next;
        free(current);
        return ;
    }
    while (current != NULL)
    {
        prev = current;
        current = current->next;
        if (current->data == data)
        {
            prev->next = current->next;
            free(current);
            return ;
        }
    }
}
int main(void)
{
    t_node *head = NULL;

    Insert(&head, 1, 1);
    Insert(&head, 2, 2);
    Insert(&head, 3, 3);
    Insert(&head, 4, 4);
    Insert(&head, 5, 5);
    printf("\n");
    Delete_Value(&head, 6);
    Print(head);
    printf("\n");
    Delete_Value(&head, 7);
    Print(head);
    printf("\n");
    Delete_Value(&head, 5);
    Print(head);
    printf("\n");
    Delete_Value(&head, 4);
    Print(head);
    printf("\n");
    Delete_Value(&head, 3);
    Print(head);
    printf("\n");
    Delete_Value(&head, 2);
    Print(head);
    printf("\n");
    Delete_Value(&head, 1);
    Print(head);
    printf("\n");
    Print(head);
}
