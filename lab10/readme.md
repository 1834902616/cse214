## [Implementation of Queue Data Structure](../lab10/1.c)
```c
typedef struct Node node;
   struct Node   // a node named structure create
{
    int value;   //value declare
    struct Node *next;  //next node address declare
};
```

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
    if ((front == NULL) && (back == NULL))
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
```

## Pop Or Element Deletion in Queue:
```c
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

    getchar();
    printf("\n\n Press 'Enter' to Continue the program...\n");
    getchar();
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

    getchar();
    printf("\n\n Press 'Enter' to Continue the program...\n");
    getchar();
}
```
