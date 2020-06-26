/*Implement a “Delete Front” function to delete the first (front)
 element of the Linked List.(Check Underflow) */

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
node* delete_front(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    head = delete_front(head);
    print_list(head);

    return 0;
}

node* delete_front(node *temp)
{
    if(temp)
    {
        node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
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

