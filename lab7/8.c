/*Define a function to reverse the Linked List using a recursive
function. Display both List before and after reversing. */

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void print_linked_list(node *temp);
void print_list_reverse(node *temp);

int main()
{
    node *a, *b, *c, *d;
    node *head = NULL;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    head = a;

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 4;
    d->next = NULL;

    printf("Before:\n");
    print_linked_list(head);

    printf("\nAfter:\n");
    print_list_reverse(head);
    printf("\n");

    return 0;
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

void print_list_reverse(node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->value);
}
