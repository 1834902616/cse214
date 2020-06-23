/* Define a function to display the complete Linked List
 with a recursive function using problem 4.*/

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void display_complete_linkedlist(node *temp);

int main()
{
    node *a, *b, *c;
    node *head = NULL;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));

    head = a;

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = NULL;

    display_complete_linkedlist(head);

    return 0;
}

void display_complete_linkedlist(node *temp)
{
    if(temp != NULL)
    {

        while(temp != NULL)
        {
            printf("%d ",temp->value);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        List_empty(temp);
    }
}

int List_empty(node *r)
{
    if(r == NULL)
    {
        printf("List Empty\n");
    }
    return 0;
}
