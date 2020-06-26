/*Implement a “Delete At” function to delete the nth element of the Linked
List.Take input ‘n’ from user.(Check Underflow and index out of range)
(Let, for the first element n = 1) */

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
node* delete_at(node *temp, int pos);

int main()
{
    int n;
    node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d",&n);
    head = delete_at(head, n);
    print_list(head);

    return 0;
}

node* delete_at(node *temp, int pos)
{
    while(temp)
    {
        if(pos > 4 || pos < 1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos == 1)
            {
                node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                node *head = temp;
                node *prev, *next;
                int i = 1;
                while(i < pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
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

