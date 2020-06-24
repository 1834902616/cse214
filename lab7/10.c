/* Copy a Linked List into another Linked List with a
recursive function. Display both List before and after Copy.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void print_linked_list(node *temp);
node* copy_list_recursive(node *list1);

int main()
{

    node *head = NULL;
    node *list2 = NULL;

    head = create_list();

    list2 = copy_list_recursive(head);

    printf("\nBefore Copy:\n");
    print_linked_list(head);

    printf("\nAfter Copy:\n");
    print_linked_list(list2);

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

void print_linked_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node* copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp -> value = list1 -> value;
    temp -> next = copy_list_recursive(list1 -> next);

    return temp;
}
