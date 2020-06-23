/*Define a function to display the complete Linked List in
reverse order with a recursive function using problem 4.*/

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void display_reverse_Linkedlist(node *temp);
void display_complete_linkedlist(node *temp);

int List_empty(node *r);

int main()
{
    node *a, *b, *c;
    node *head = NULL;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));

    display_complete_linkedlist(head);

    head = a;

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = NULL;

    display_reverse_Linkedlist(head);

    printf("\n");

    display_complete_linkedlist(head);


    return 0;
}

void display_reverse_Linkedlist(node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    else
    {
        display_reverse_Linkedlist(temp->next);
        printf("%d ",temp->value);
    }
}

void display_complete_linkedlist(node *temp)
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


