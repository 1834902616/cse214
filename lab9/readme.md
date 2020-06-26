## [Insert Front in Linked List](../lab9/1.c)
```c
node* insert_front(node *temp, int key)
{
    node *new_head;
    new_head = (node*) malloc(sizeof(node) );
    new_head->value = key;
    new_head->next = temp;
    return new_head;
}
```

## [Insert Back in Linked List](../lab9/2.c)
```c
node* insert_back(node *temp, int key)
{
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
```

## [Insert at And Check Index out Of Range](../lab9/3.c)
```c
node* insert_at(node *temp, int pos, int value)
{
    node *head = temp, *prev, *new_node;
    int i = 0;
    if(pos < 1 || pos > 4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (node*) malloc(sizeof(node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (node*) malloc(sizeof(node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf( "Invalid Index\n");
    return head;
}
```

## [Insert After and Check Index out Of Range](../lab9/4.c)
```c
node* insert_after(node *temp, int key, int value)
{
    node *head = temp;
    int i = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            node *new_node = (node*) malloc(sizeof (node) );
            new_node->value = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
        }
        temp = temp->next;
    }
    if(i<1 || i>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");

    return head;
}node* insert_before(node *temp, int key, int value)
{
    node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            if(temp == head)
            {
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->value = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->value = value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i < 1 || i > 4 || j < 1 || j > 4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}
```

## [Insert Before and Check Index out Of Range](../lab9/5.c)
```c
node* insert_before(node *temp, int key, int value)
{
    node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            if(temp == head)
            {
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->value = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->value = value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i < 1 || i > 4 || j < 1 || j > 4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}
```
