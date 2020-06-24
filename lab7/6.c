/*Define a "Search" function to find a 'key' (take input 'key' from user).
 Print "Found" if the search 'key' is found in the Linked List otherwise
 print "Not Found".*/

#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void print_list(node *temp);
node* create_list();
int search(node *temp, int key);

int main()
{
    node *head = NULL;

    head = create_list();

    print_list(head);

    if(search(head,5) == 0)
    {
        printf("Search 5: Not Found");
    }
    else
        printf("\nSearch 5: Found");

    if(search(head,4) == 1)
    {
        printf("\nSearch 2: Found");
    }
    else
    {
        printf("\nSearch 2: Not Found");
    }
    printf("\n");

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
    if(temp == NULL)
    {
        printf("List Empty\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int search(node *temp, int key)
{
    if(temp)
    {
        while(temp)
        {
            if(key == temp->value)
            {
                return 1;
            }
            temp = temp->next;
        }

        return 0;
    }
    return 0;
}

