/*  Implement an “Insert Back” function to insert an element at the end (back) of the Linked List. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* insert_back(Node *temp, int key);

int main()
{
    Node *head = NULL;

    head = create_list();
    print_list(head);
    head = insert_back(head, 50);
    print_list(head);

    return 0;
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

Node* insert_back(Node *temp, int key)
{
    if (temp==NULL)
    {
        Node *new_head;
        new_head = (Node*) malloc(sizeof (Node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    Node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;

    new_node = (Node*) malloc(sizeof (Node) );
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
