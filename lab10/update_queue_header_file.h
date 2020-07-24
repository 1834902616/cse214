/**
Name -> Shamima Akther
ID -> 1834902616
**/

/*
 For Designing a "Queue Data Structure" Required Operation's Header File.
*/

#include <stdio.h>
#include <stdlib.h>

/* Structure Create for a Queue */
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

/* Function to Display the Queue Elements */
void display_queue(node *temp)
{
    if (temp == NULL)
    {
        printf("\t\t*** Queue is empty ***");
        return;
    }
    while (temp != NULL)
    {
        printf("\t%d", temp->value);
        temp = temp->next;
    }
}

/* Function to Display if the Queue is Empty or Not */
void empty(node *temp)
{
    if ((temp == NULL))
    {
        printf("\n\t\t*** Queue is empty.***");
    }
    else
    {
        printf("\n\t\t*** Queue is not empty.***");
    }
}

/* Function to Insert or Push Elements in the Queue */
node* push(node *temp, int value)
{
    node *head = temp, *new_node;
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = value;
        new_head->next = NULL;
        return new_head;
    }
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = value;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

/* Function to Pop Value from the Queue */
node* pop(node *temp)
{
    if(temp != NULL)
    {
        node *new_head = temp->next;
        printf("\n\t\t*** Deleted value : %d ***", temp->value);
        free(temp);
        return new_head;
    }
    printf("\n\t\t*** No Elements Left, Empty Queue ***");
    return temp;
}

/* Function to Return Queue Size */
void queue_size(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\n\t\t*** Queue size is: %d ***", count);
}

/* Function to Return the First or Top Element of Queue */
void top(node *temp)
{
    if(temp != NULL)
    {
        printf("\n\t\t*** Top element : %d ***", temp->value);
    }
    else
    {
        printf("\n\t\t*** No Top element in Queue, as Queue is Empty ***");
    }
}
