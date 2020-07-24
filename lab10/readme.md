<h1 align="center">*** Design A Queue Data Structure ***</h1>

#### [CLICK HERE For C File](../lab10/update_queue.c)

#### [CLICK HERE For Header File](../lab10/update_queue_header_file.h)

## [Implementation of Queue Data Structure Using Linked List](../lab10/1.c)
## Structure For A Queue:
```c
typedef struct Node node;
   struct Node   // a node named structure create
{
    int value;   //value declare
    struct Node *next;  //next node address declare
};
```
## Used pointers & variables For Queue:
```c
node *front,*back,*temp,*first;
int count = 0;

int value, option, front_element;
```
## Create An Empty Queue:
```c
/* Create an empty queue */
   front = back = NULL;
```

## Check Queue is Empty Or Not:
```c
/* Function to Display if the Queue is Empty or Not */
void empty()
{
    if ((front == NULL) && (back == NULL)) //If both first & last element of queue is equal to Null.
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\n Queue is not empty");
    }
}
```
## Finding Queue Size:
```c
/* Function to Return Queue Size */
void queue_size()
{
    printf("\n Queue size : %d", count);
}
```

## Push Or Elements Insertion in Queue:
```c
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
```

## Display or Print Queue Elements:
```c
/* Function to Display the Queue Elements */
void display_queue()
{
    first = front; //hold the front value in a  variable named first

    if ((first == NULL) && (back == NULL)) //if there is no element in Queue
    {
        printf("\n Queue is empty ");
        return;
    }
    while (first != back) //If there is morre than one element in queue
    {
        printf(" %d ", first->value);
        first = first->next;
    }
    if (first == back) // if there is one element only in queue
    {
        printf(" %d", first->value);
    }
}
```

## Pop Or Element Deletion in Queue:
```c
/* Function to Delete Value from the Queue */
void pop()
{
    first = front; //hold the front value in a  variable named first

    if (first == NULL) //if there is no element in Queue
    {
        printf("\n No Elements Left, Empty Queue");
        return;
    }
    else if (first->next != NULL) //if there is more than one element in Queue
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
```

## Find Top Element of Queue:
```c
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
    front_element = top();
    if (front_element != 0)
            {
                printf(" Top element : %d", front_element);
            }
            else
            {
                printf("\n No Top element in Queue as Queue is Empty");
            }
}
```
