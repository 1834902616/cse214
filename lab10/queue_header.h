/*
 Design a Queue Data Structure using Linked List in C programming Language.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node *front,*back,*temp,*first;

void create_empty_queue();
void menu();
void push(int data);
void pop();
int top();
void empty();
void display_queue();
void queue_size();

int count = 0;

void create_empty_queue(){
    /* Create an empty queue */
    front = back = NULL;
}

void menu()
{
    int value, option, front_element;
    do
    {
        system(" cls ");
        printf("\n Choose Operations for Queue from below: \n");
        printf("\n 1 : Display Queue");
        printf("\n 2 : Empty");
        printf("\n 3 : Size");
        printf("\n 4 : Top");
        printf("\n 5 : Push");
        printf("\n 6 : Pop");
        printf("\n 7 : Exit Program");

        printf("\n");

        printf("\n Enter your Option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            display_queue();

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 2)
        {
            empty();

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if( option == 3)
        {
            queue_size();

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 4)
        {
            front_element = top();

            if (front_element != 0)
            {
                printf(" Top element : %d", front_element);
            }
            else
            {
                printf("\n No Top element in Queue as Queue is Empty");
            }
            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if( option == 5)
        {
            printf(" Enter Queue Element : ");
            scanf("%d", &value);

            push(value);
            printf("\n %d Data inserted in Queue.\n",value);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 6)
        {
            pop();

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
            printf("\n Wrong choice, Please Enter Correct Choice Between '1 to 7'..");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
    }
    while(option != 7);
}

/* Function to Display if the Queue is Empty or Not */
void empty()
{
    if ((front == NULL) && (back == NULL))
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\n Queue is not empty");
    }
}

/* Function to Insert or Push Elements in the Queue */
void push(int data)
{
    if (back == NULL)
    {
        back = (node*)malloc(sizeof(node));
        back->next = NULL;
        back->value = data;
        front = back;
    }
    else
    {
        temp = (node*)malloc(sizeof(node));
        back->next = temp;
        temp->value = data;
        temp->next = NULL;
        back = temp;
    }
    count++;
}

/* Function to Return Queue Size */
void queue_size()
{
    printf("\n Queue size : %d", count);
}

/* Function to Display the Queue Elements */
void display_queue()
{
    first = front;

    if ((first == NULL) && (back == NULL))
    {
        printf("\n Queue is empty ");
        return;
    }
    while (first != back)
    {
        printf(" %d ", first->value);
        first = first->next;
    }
    if (first == back)
    {
        printf(" %d", first->value);
    }
}

/* Function to Delete Value from the Queue */
void pop()
{
    first = front;

    if (first == NULL)
    {
        printf("\n No Elements Left, Empty Queue");
        return;
    }
    else if (first->next != NULL)
    {
        first = first->next;
        printf("\n Deleted value : %d", front->value);
        free(front);
        front = first;
    }
    else
    {
        printf("\n Deleted value : %d", front->value);
        free(front);
        front = NULL;
        back = NULL;
    }

    count--;
}

/* Function to Return the First or Top Element of Queue */
int top()
{
    if ((front != NULL) && (back != NULL))
    {
        return(front->value);
    }
    else
    {
        return 0;
    }

    getchar();
    printf("\n\n Press 'Enter' to Continue the program...\n");
    getchar();
}
