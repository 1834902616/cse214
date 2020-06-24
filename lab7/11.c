/*Define a function to merge two Linked List. Display all the list
before and after merging.*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list1();
node* create_list2();
node* copy_list(node*list1);
node *merge_list(node *list1, node *list2);
void print_list(node *temp);

int main ()
{
    node* list1 = NULL;
    node* list2 = NULL;
    node* list3 = NULL;

    printf("Before Merging:\n");

    list1 = create_list1();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    printf("After Merging:\n");
    list3 = merge_list(list1,list2);
    print_list(list3);

    return 0;
}
node* create_list1()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 15;
    a->next = b;

    b->value = 33;
    b->next = c;

    c->value = 94;
    c->next = d;

    d->value = 45;
    d->next = NULL;

    return a;
}

node* create_list2()
{
    node *p, *q, *r, *s, *t, *u;

    p = (node *) malloc(sizeof(node));
    q = (node *) malloc(sizeof(node));
    r = (node *) malloc(sizeof(node));
    s = (node *) malloc(sizeof(node));
    t = (node *) malloc(sizeof(node));
    u = (node *) malloc(sizeof(node));


    p->value = 50;
    p->next = q;

    q->value = 64;
    q->next = r;

    r->value = 38;
    r->next = s;

    s->value = 90;
    s->next = t;

    t->value = 401;
    t->next = u;

    u->value = 55;
    u->next = NULL;

    return p;
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
        temp->value = list1->value;
        temp->next = NULL;
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
        temp = temp->next;
    }
    temp->next = copy_list(list2);

    return head;
}

void print_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d\n",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
