/*Define a function to reverse the Linked List.(Don't use recursion)
Display both List before and after reversing.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void print_linked_list(node *temp);
node* reverse_list(node* list1);

int main()
{

    node *head = NULL;
    node *list2 = NULL;

    head = create_list();

    printf("Before:\n");
    print_linked_list(head);

    printf("After:\n");
    head = reverse_list(head);
    print_linked_list(head);

    return 0;
}

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 4;
    d->next = NULL;

    return a;
}

void print_linked_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node* reverse_list(node* list1)
{
    node *first, *current, *temp;
    first = list1;
    current = list1->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}
