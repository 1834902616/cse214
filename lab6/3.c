/* Define a function to display (only value for each node)
the complete Linked List and do the same as problem 1.
(Don't use DMA)*/

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
    node a, b, c;
    node *temp,*head = NULL;

    head = &a;

    a.value = 1;
    a.next = &b;

    b.value = 2;
    b.next = &c;

    c.value = 3;
    c.next = NULL;

    display_complete_linkedlist(head);
    printf("\n");

    temp = head;
    while(temp != NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
        temp = temp->next;
    }

    return 0;
}
void display_complete_linkedlist(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
