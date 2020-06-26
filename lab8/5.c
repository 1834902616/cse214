/* Implement a “Clear” function to delete the all the element of the Linked List. */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void print_list(node *temp);
node* clear(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    if(clear(head) == NULL)
    {
        printf("\nClear Linked List\n");
    }

    return 0;
}

node* clear(node *temp)
{
    node *clear;
    while(temp)
    {
        clear = temp;
        temp = temp->next;
        free(clear);
    }
    return NULL;
}

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 30;
    a->next = b;

    b->value = 50;
    b->next = c;

    c->value = 70;
    c->next = d;

    d->value = 90;
    d->next = NULL;

    return a;
}

void print_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
