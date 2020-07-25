<h1 align="center">*** Design A Queue Data Structure ***</h1>

#### [CLICK HERE For C File](../lab10/update_queue.c)

#### [CLICK HERE For Header File](../lab10/update_queue_header_file.h)

## Introduction :
A queue is an example of a linear data structure or more abstractly a sequential collection which allows the first element to be inserted in the queue will be the first element to be deleted or removed from the queue.<br>This makes queue as FIFO (First in First Out) data structure, which means that element inserted first will be removed first.
We can perform many Operations in Queue using Given Functions:
   * <b>Display:</b> Show the queue like how it is & also Check if the queue is empty here as well.
   * <b>Empty:</b> Tests to see whether the queue is empty or not and display the result.
   * <b>Size:</b> Count the Queue elements & Returns the number of elements in the queue.
   * <b>Top:</b> In Queue, after pop operation Top is the element which can be removed first from the queue as queue is the FIFO (First in First Out) data structure. So this function gets the first element from the displayed queue which is removable.
   * <b>Push:</b> Add/Insert a new element to the rear/back/end of the queue. This Function needs the element and returns nothing.
   * <b>Pop:</b> Removes the front element from the queue and returns the removed element. Then the queue is modified after deletion.

## Uses Of Queue:
Queue, as the name suggests is used whenever we need to manage any group of objects in an order in which the first one coming in, also gets out first while the others wait for their turn, like in the following scenarios:
   * Queues provide services in computer science, transport, and operations research where various entities such as data, objects, persons, or events are stored and held to be processed later. In these contexts, the queue performs the function of a buffer. 
   * Within a computer system where the queue of tasks arranged in the list to Serving requests on a single shared resource, like a printer.
   * Queue is also used for accessing the disk storage and even for CPU task scheduling in computer system.
So basically queue is used within a single program where there are multiple programs kept in the queue or one task may create other tasks which must have to be executed in turn by keeping them in the queue.
   * Another usage of queues is in the implementation of breadth-first search.

A real-life scenario in the form of example for queue will be the queue of people waiting to accomplish a particular task where the first person in the queue is the first person to be served first.
   * In real life scenario, Call Center phone systems uses Queues to hold people calling them in an order, until a service representative is free.
Which is exactly how queue system works in real world. If someone go to a ticket counter to buy movie tickets, and are first in the queue, then he/she will be the first one to get the tickets.
   * Handling of interrupts in real-time systems. The interrupts are handled in the same order as they arrive. First come first served.

## Program Description & Function Implementations:
### Structure For A Queue:
```c
typedef struct Node node;
   struct Node   // a node named structure create
{
    int value;   //value declare
    struct Node *next;  //next node address declare
};
```
### Used pointers & variables For Queue:
```c
node *head,*new_head,*temp,*new_node;
int count = 0;

int value, option;
```
### Empty:
```c
/* Function to Display if the Queue is Empty or Not */
void empty(node *temp)
{
    if ((temp == NULL)) //if there is no element in Queue
    {
        printf("\n\t\t*** Queue is empty.***");  //then print empty  
    }
    else
    {
        printf("\n\t\t*** Queue is not empty.***"); // or not
    }
}
```
### Queue Size:
```c
/* Function to Return Queue Size */
void queue_size(node *temp)
{
    int count = 0;
    while (temp != NULL)  // if queue is not empty
    {
        temp = temp->next;  //traverse queue elements
        count++;        //& count elements
    }
    printf("\n\t\t*** Queue size is: %d ***", count);  //print result
}
```

### Push:
```c
/* Function to Insert or Push Elements in the Queue */
node* push(node *temp, int value)
{
    node *head = temp, *new_node;
    if (temp == NULL) //if queue is empty
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) ); //create a node
        new_head->value = value; //insert the value
        new_head->next = NULL; //assign null to the next address
        return new_head;
    }
    while(temp->next)  //if there  is element
        temp = temp->next;  //hold the value in variable
    new_node = (node*) malloc(sizeof (node) ); //create place for inserted element
    new_node->value = value;  //put value 
    new_node->next = NULL; //assign null to next address of it
    temp->next = new_node; //pass the address to the previously holding variable
    return head;
}
```

### Display or Print Queue Elements:
```c
/* Function to Display the Queue Elements */
void display_queue()
void display_queue(node *temp)
{
    if (temp == NULL)   //if there is  no element
    {
        printf("\t\t*** Queue is empty ***");
        return;
    }
    while (temp != NULL) //if there is element
    {
        printf("\t%d", temp->value); //print value 
        temp = temp->next; 
    }
}
```

### Pop:
```c
/* Function to Pop Value from the Queue */
node* pop(node *temp)
{
    if(temp != NULL) //if queue is not empty
    {
        node *new_head = temp->next; //assign the address to a helping node
        printf("\n\t\t*** Deleted value : %d ***", temp->value); //print deleted value
        free(temp); //free the deleted space
        return new_head;
    }
    printf("\n\t\t*** No Elements Left, Empty Queue ***");
    return temp;
}
```

### Top:
```c
/* Function to Return the First or Top Element of Queue */
void top(node *temp)
{
    if(temp != NULL) //if queue is not empty
    {
        printf("\n\t\t*** Top element : %d ***", temp->value); //print first value
    }
    else
    {
        printf("\n\t\t*** No Top element in Queue, as Queue is Empty ***");
    }
}
```
