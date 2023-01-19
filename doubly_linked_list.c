/* Doubly linked list Implementation */

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} t_node;

struct Node *head; // global variable - pointer to head node;
t_node *GetNewNode(int x)
{
    t_node *newNode = malloc(sizeof(t_node));    
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return (newNode);
}

void    InsertAtHead(int x)
{
    t_node *newNode = GetNewNode(x);
    if (!head)
    {
        head = newNode;
        return ;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
int main()
{

}
