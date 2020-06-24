/*Copy a linked List into another linked List. Display
both List before and after copy. (Don't use recursion)*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void print_list(node *temp);
node* copy_list(node*list1);

int main()
{

    node *head = NULL;
    node *list2 = NULL;

    head = create_list();

    printf("\nBefore CopyList:\n");
    print_list(head);

    list2 = copy_list(head);

    printf("\nAfter CopyList:\n");
    print_list(list2);

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
    while(temp!=NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
    printf("\n");
}

node* copy_list(node*list1)
{
    node *head2, *temp;
    temp = (node*)malloc(sizeof(node)) ;
    temp -> value = list1-> value;
    temp -> next = NULL;
    head2 = temp;
    list1 = list1 -> next;
    while (list1)
    {
        temp->next = (node*)malloc(sizeof(node)) ;
        temp = temp -> next;
        temp -> value = list1 -> value;
        temp -> next = NULL;
        list1 = list1->next;
    }
    return head2;
}

