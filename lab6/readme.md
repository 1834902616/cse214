### Define, Create, Initialization & Decleration Basic patterns[For Structure & LinkedList]:
```c
//Structure Definition:
struct Structure_Name {
    dataType Variable_Name;
    dataType Variable_Name;
    ...       ...
};

// Structure  Declaration:
struct Structure_Name Variable_Name;

//Structure Value Assign:
Variable_Name.Member_Name = Value;

//Structure Output Pattern:
printf("%d %d\n", p.x, p.y);

//Typedef Apply:
typedef struct Structure_Name New_DataType_Name;
```
## [Decleration & Initialization of Linked List](../lab6/1.c)
```c

// First Node_variable put into a pointer for accessing
 // head = &p;
 
 // First Node_variable put into a pointer for accessing
  head = &p;
  
 // any_Variable = next_ Variable_address
  p.next = &q;
  ... ... ...
 
   struct Node
{
    int value;
    struct Node *next;
};

int main()
{
    struct Node a, b, c;
    struct Node* head, *temp;

    head = &a;

    a.value = 1;
    a.next = &b;

    b.value = 2;
    b.next = &c;

    c.value = 3;
    c.next = NULL;

    temp = head;
    while(temp != NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
        temp = temp->next;
    }

```
## [Define function to print Single Node of Linked List](../lab6/2.c)
```c

void print_node(node *p)
{
    printf("%p \t %d \t %p\n", p, p->value, p->next);
}
```

## [Define function to display complete Linked List(Only Value Of Each Node)](../lab6/3.c)
```c
void display_complete_linkedlist(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
```
## [Using DMA to create Linked List, Print Linked List & Check Empty List](../lab6/4.c)
```c

void display_complete_linkedlist(node *temp)
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

```
## [Define Recursive function to display complete Linked List(Only Value Of Each Node)](../lab6/5.c)
```c
void display_complete_linkedlist(node *temp)
{
    if(temp != NULL)
    {
        printf("%d ",temp->value);

        if(temp->next == NULL)
        {
            return;
        }

        display_complete_linkedlist(temp->next);

        printf("\n");
    }
    else
    {
        List_empty(temp);
    }
}

int List_empty(node *r)
{
    if(r == NULL)
    {
        printf("List Empty\n");
    }
    return 0;
}


```
## [Define function to display complete Linked List in Reverse Order(Only Value Of Each Node)](../lab6/6.c)
```c
void display_reverse_Linkedlist(node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    else
    {
        display_reverse_Linkedlist(temp->next);
        printf("%d ",temp->value);
    }
}
```
