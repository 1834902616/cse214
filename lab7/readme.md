
## [Define Create Function to declare Linked List(Using DMA)](../lab7/1.c)
```c
node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

```
## [Define Empty Function to Check Linked List(Using DMA)](../lab7/2.c)
```c
int is_empty(node *temp)
{
    if(temp == NULL)
    {
        return 1;
    }
    return 0;
}
```
## [Define Size Function to Find Size Of Linked List(Using DMA)](../lab7/3.c)
```c
int size(node *temp)
{
    int count = 0;

    while(temp)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}

```
## [Define Front Function to display First Element Of Linked List(Using DMA)](../lab7/4.c)
```c
int front(node *temp){
    if(temp != NULL){
        return temp->value;
    }
}

```
## [Define Back Function to display Last Element Of Linked List(Using DMA)](../lab7/5.c)
```c
int back(node *temp)
{
    if(temp != NULL)
    {
        while(temp->next)
        {
            temp = temp->next;
        }
        return temp->value;
    }
}

```
## [Define Search Function to Search Key Element Of Linked List(Using DMA)](../lab7/6.c)
```c
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
```
## [Define function to reverse the Linked List.(Without using recursion)](../lab7/7.c)
```c
node* reverse_list(node* list1)
{
    node *first, *current, *temp;
    first = list1;
    current = list1->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}

```
## [Define function to Display reverse Linked List.(Using recursion)](../lab7/8.c)
```c
void print_list_reverse(node *temp)
{
    if(temp == NULL)
    {
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->value);
}

```
## [Copy a linked List into another linked List(Without Using recursion)](../lab7/9.c)
```c
node* copy_list(node*list1)
{
    node *head2, *temp;
    temp = (node*)malloc(sizeof(node)) ;
    temp -> value = list1-> value;
    temp -> next = NULL;
    head2 = temp;
    list1 = list1 -> next;
    while (list1)
    {
        temp->next = (node*)malloc(sizeof(node)) ;
        temp = temp -> next;
        temp -> value = list1 -> value;
        temp -> next = NULL;
        list1 = list1->next;
    }
    return head2;
}

```
## [Copy a linked List into another linked List(Using recursion)](../lab7/10.c)
```c

node* copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp -> value = list1 -> value;
    temp -> next = copy_list_recursive(list1 -> next);

    return temp;
}

```
## [Define A Function to Merge Two Linked List & Display](../lab7/11.c)
```c

node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = copy_list(list1);

    temp = head;

    while(temp -> next)
    {
        temp = temp->next;
    }
    temp->next = copy_list(list2);

    return head;
}
```
## [Define a Function to Merge Two Sorted Linked List into A Sorted linked List](../lab7/12.c)
```c

node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = create_list(list1);
    temp = head;

    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = create_list2(list2);
    return head;
}

```
