/* Define an "Empty" function to check whether the Linked List is empty or not.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void print_list(node *temp);
node* create_list();
int is_empty(node *temp);

int main()
{
    node *head = NULL;

    print_list(head);
    printf("Empty: %d\n", is_empty(head));

    head = create_list();

    print_list(head);
    printf("Empty: %d\n", is_empty(head));

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

void print_list(node *temp)
{
    if(temp == NULL)
    {
        printf("List Empty\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int is_empty(node *temp)
{
    if(temp == NULL)
    {
        return 1;
    }
    return 0;
}
