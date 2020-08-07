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
node* delete_front(node *temp);
void printList(node* temp);
void display_reverse( node* temp);

int main()
{
    node *head = NULL;
    node *list2 = NULL;
    int value, option, pos;
    do
    {
        enum Queue_operations {a = 1,b,c,d,e,f,g};
        system(" cls ");
        printf("\n Choose Operations for 'Queue' from below: \n");
        printf("\n %d : Insert at",a);
        printf("\n %d : Delete Front",b);
        printf("\n %d : Copy Recursively",c);
        printf("\n %d : Merge Two list",d);
        printf("\n %d : Display Reverse",e);
        printf("\n %d : Display",f);
        printf("\n %d : Exit Program",g);

        printf("\n");

        printf("\n Enter your Option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            printf(" Enter Position : ");
            scanf("%d", &pos);

            printf(" Enter Element : ");
            scanf("%d", &value);

            head = insert_at(head,pos,value);

            printf("\n\t\t*** %d, Data inserted. ***",value);
            printf("\n");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 2)
        {
            head = delete_front(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 3)
        {
            list2 = copylist_recursive(head);
            printList(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 4)
        {

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 5)
        {
            display_reverse(head);
            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 6)
        {

            printList(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\n\t *** Invalid Option, Please Enter Correct Option Between '1 to 7' ***");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
    }
    while(option != 7);
    return 0;
}


void printList(node* temp)
{

    if(temp == NULL)
    {
        printf("\nList Empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }

    }
}
void display_reverse( node* temp)
{

    if(temp == NULL)
    {
        printf("\nList Empty\n");
    }
    else
    {
        printf("Linked list in reverse order: \n");
        while (temp != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->prev;
        }
    }
}
node* delete_front(node *temp)
{
    if(temp!=NULL)
    {
        node *new_head = temp->next;
        free(temp);
        return new_head;
    }
    printf("Underflow Linked List");
    return temp;
}
void insert_at(node *temp, int pos, int data)
{
    node *head=temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos==1)
    {
        new_node = (node*) malloc(sizeof(node) );
        new_node-> data = data;
        new_node->next = temp;
        return new_node;
    }
    while(temp)
    {
        prev = temp;
        if(i==pos)
        {
            new_node = (node*) malloc(sizeof(node)) ;
            new_node-> data = data;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf("Invalid Index\n");
    return head;
}

/*void copylist_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp -> data = list -> data;
    temp -> next = copylist_recursive(list1->next);
    return temp;

*/
node *merge_list(node *list1,node*list2)
{
    node *head,*temp,*new_node;
    head = list1;
    temp = head;
    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = list2;
    return head;
}
