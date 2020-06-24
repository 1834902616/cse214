/* Define a "Create" function to declare a Linked List with four
 node using dynamic memory allocation. Print the complete Linked
 List after calling create function.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void print_list(node *temp);
node* create_list();

int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    return 0;
}

void print_list(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d\n",temp->value);
        temp = temp->next;
    }
}

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

