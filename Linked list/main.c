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
	while(current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
	}
}

void Insert(t_node **head, int data, int n)
{
	t_node *temp1 = (t_node *)malloc(sizeof(t_node));
	temp1->data = data;
	temp1->next = NULL;
	if (n == 1)
	{
		temp1->next = *head;
		*head = temp1;
		return ;
	}
	t_node *temp2 = *head;
	for (int i = 0; i < n - 2; i++)
		temp2 = temp2->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
}

t_node **Reverse(t_node **head)
{
	t_node *current;
	t_node *prev;
	t_node *next;
	
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (head);
}

int main(void)
{
	t_node *head = NULL;
	Insert(&head, 1, 1);
	Insert(&head, 2, 2);
	Insert(&head, 3, 3);
	Insert(&head, 4, 4);
	Insert(&head, 5, 5);
	Insert(&head, 6, 6);
	printf("The list is : \n");
	Print(head);
	printf("\nThe reverse list is : \n");
	Reverse(&head);
	Print(head);
	printf("\n");
	return (0);
}