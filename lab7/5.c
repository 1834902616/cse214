/*Define a "Back" function to display the last element of the Linked List.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void print_list(node *temp);
node* create_list();
int back(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();

    print_list(head);
    printf("Back: %d\n", back(head));

    return 0;
}

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 7;
    a->next = b;

    b->value = 6;
    b->next = c;

    c->value = 1;
    c->next = d;

    d->value = 5;
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
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int back(node *temp)
{
    if(temp != NULL)
    {
        while(temp->next)
        {
            temp = temp->next;
        }
        return temp->value;
    }
}
