/*  Implement a “Delete Value” function to delete a value (key) from the Linked List.
    Take input the delete ‘key’ from user. (Check Underflow and Not Found) */

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
node* delete_value(node *temp, int key);

int main()
{
    int n;
    node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d",&n);
    head = delete_value(head, n);
    print_list(head);

    return 0;
}

node* delete_value(node *temp, int key)
{
    if (temp)
    {
        node *head = temp, *prev;
        while(temp)
        {
            if(temp->value == key)
            {
                if(head == temp)
                {
                    head = temp->next;
                    free(temp);
                    return head;
                }
                else
                {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return temp;
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

    b->value = 50;
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
