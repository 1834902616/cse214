/*Implement a “Delete Back” function to delete the last (back)
element of the Linked List(Check Underflow) */

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
node* delete_back(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    head = delete_back(head);
    print_list(head);

    return 0;
}

node* delete_back(node *temp)
{
    node *head = temp, *last;
    if(temp)
    {
        if (head->next != NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return temp;
    return head;
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

    b->value =50;
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

