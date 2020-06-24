/*Define a function to merge two sorted Linked List into a sorted
Linked List.Display all the list before and after merging.
(Consider given two linked list are already sorted) */

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node* create_list2();
node* create_list();
node* copy_list(node*list1);
node *merge_list(node *list1, node *list2);
void print_list(node *temp);

int main ()
{
    node* list1 = NULL;
    node* list2 = NULL;
    node* list3 = NULL;

    list1 = create_list();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    list3 = merge_list(list1,list2);
    print_list(list3);

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
node* create_list2()
{
    node *e, *f, *g, *h;

    e = (node *) malloc(sizeof(node));
    f = (node *) malloc(sizeof(node));
    g = (node *) malloc(sizeof(node));
    h = (node *) malloc(sizeof(node));

    e->value = 5;
    e->next = f;

    f->value = 6;
    f->next = g;

    g->value = 7;
    g->next = h;

    h->value = 8;
    h->next = NULL;

    return e;
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

node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = copy_list(list1);
    temp = head;

    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = copy_list(list2);
    return head;
}

void print_list(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
