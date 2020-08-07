/*
Name = Shamima Akther
ID = 1834902616
*/

/* Design a Double way non circular linked list */

#include<stdio.h>
#include<stdlib.h>

// Structure Declare
typedef struct Node node;
struct Node
{
    int data;
    node *next;
    node *prev;
};

// Function Prototype
void display_list(node *temp);
node* push_front(node temp,int item);
void push_back();
void pop_front();
void pop_back();
void clear();
int front(node *temp);
int back(node *temp);
void empty(node *temp);
void size(node *temp);

// Display Doubly Linked List
void display_list(node *temp)
{
    node *head ;
    node *new_node;
    printf("Doubly Linked List: ");
    new_node = head;
    if(new_node==NULL)
    {
        printf(">>> Empty <<<");
    }
    while(new_node != NULL)
    {
        printf("%d ",new_node->data);
        new_node=new_node->next;
    }
}

// Insert Front
node* push_front(node temp,int item)
{
    node *new_node, *head;
    new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        printf("Input Value to Push Front: ");
        scanf("%d",&item);

        if(head==NULL)
        {
            new_node->next = NULL;
            new_node->prev=NULL;
            new_node->data=item;
            head=new_node;
        }
        else
        {
            new_node->data=item;
            new_node->prev=NULL;
            new_node->next = head;
            head->prev=new_node;
            head=new_node;
        }
        printf("\n Front Node Inserted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}

// Insert Back
void push_back()
{
    node *new_node,*temp;
    int item;
    new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        printf("Input Value to Push Back: ");
        scanf("%d",&item);
        new_node->data=item;
        if(head == NULL)
        {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node ->prev=temp;
            new_node->next = NULL;
        }

    }
    printf("\nBack Node Inserted");
    getchar();
    printf("\nPress Enter to Continue");
    getchar();
}

// Delete Front
void pop_front()
{
    node *new_node;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Front Node Deleted");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        new_node = head;
        head = head -> next;
        head -> prev = NULL;
        free(new_node);
        printf("\nFront Node Deleted");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}

// Delete Back
void pop_back()
{
    node *new_node=head, *prev;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\ Back Node Deleted");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        while(new_node->next!=NULL)
        {
            prev=new_node;
            new_node=new_node->next;
        }
        prev->next=NULL;
        free(new_node);
        printf(" Back Node Deleted ");
        getchar();

        printf("\nPress Enter to Continue");
        getchar();

}

// Delete all Node From Doubly Linked List
void clear()
{
    node *list_delete;
    node *temp = head;
     while(temp)
    {
        list_delete = temp;
        temp = temp->next;
        free(list_delete);
    }
}


// Print Front or Head
int front(node *temp)
{
    if(temp!=NULL)
    {
        return temp->data;
    }
}

//Print Back or Tail
int back(node *temp)
{
    if(temp!=NULL)
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        return temp->data;
    }
}

// Check Doubly Linked List is Empty or Not Empty
void empty(node *temp)
{
    if(temp==NULL)
        printf("\nList are Empty");
    else
        printf("\n List are Not Empty \n");
}

// Print Doubly Linked List Size
void size(node *temp)
{
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    printf("List Size: %d\n", count);
}
