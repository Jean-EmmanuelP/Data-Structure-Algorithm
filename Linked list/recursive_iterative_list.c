#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}	t_node;

void Print(t_node *head)
{
	t_node *current = head;
	while (current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
	}
}

void Insert(t_node **head, int data, int n)
{
	t_node *newNode = malloc(sizeof(t_node));
	newNode->data = data;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	if (n == 1)
	{
		newNode->next = *head;
		*head = newNode;
		return ;
	}
	t_node *current = *head;
	for (int i = 0; i < n - 2; i++)
	{
		if (current->next == NULL)
		{
			printf("Invalid position\n");
			return ;
		}
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
}

int main(void)
{
	t_node *head;
	head = NULL;
	Insert(&head, 1, 1);
	Insert(&head, 2, 2);
	Insert(&head, 3, 3);
	Insert(&head, 4, 4);
	Insert(&head, 5, 5);
	printf("The list : ");
	Print(head);
	return (0);
}