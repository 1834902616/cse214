/*Define a "Front" function to display the first element of the Linked List.*/

#include<stdio.h>

typedef struct Node node;
struct Node{
    int value;
    node *next;
};

void print_list(node *temp);
node* create_list();
int front(node *temp);

int main(){
    node *head = NULL;

    head = create_list();

    print_list(head);
    printf("Front: %d\n", front(head));

    return 0;
}

node* create_list(){
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 5;
    a->next = b;

    b->value = 7;
    b->next = c;

    c->value = 9;
    c->next = d;

    d->value = 4;
    d->next = NULL;

    return a;
}

void print_list(node *temp){
    if(temp == NULL){
        printf("List Empty\n");
        return;
    }
    while(temp != NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int front(node *temp){
    if(temp != NULL){
        return temp->value;
    }
}
