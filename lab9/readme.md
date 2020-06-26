## [Insert Front in Linked List](../lab9/1.c)
```c
Node* insert_front(Node *temp, int key)
{
    Node *new_head;
    new_head = (Node*) malloc(sizeof(Node) );
    new_head->value = key;
    new_head->next = temp;
    return new_head;
}
```

## [Insert Back in Linked List](../lab9/2.c)
```c
Node* insert_back(Node *temp, int key)
{
    if (temp==NULL)
    {
        Node *new_head;
        new_head = (Node*) malloc(sizeof (Node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    Node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;

    new_node = (Node*) malloc(sizeof (Node) );
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
```

## [Insert at And Check Index out Of Range](../lab9/3.c)
```c
Node* insert_at(Node *temp, int pos, int value)
{
    Node *head = temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (Node*) malloc(sizeof(Node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (Node*) malloc(sizeof(Node)) ;
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
Node* insert_after(Node *temp, int key, int value)
{
    Node *head = temp;
    int i = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            Node *new_node = (Node*) malloc(sizeof (Node) );
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
    return head;
}
```

## [Insert Before and Check Index out Of Range](../lab9/5.c)
```c
Node* insert_before(Node *temp, int key, int value)
{
    Node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            if(temp == head)
            {
                Node *new_node = (Node*) malloc(sizeof(Node*)) ;
                new_node->value = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                Node *new_node = (Node*) malloc(sizeof(Node*));
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
    if(i<1 || i>4 || j<1 || j>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    return head;
}
```
