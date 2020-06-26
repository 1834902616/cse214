## [Delete Back and Check Underflow](../lab8/1.c)
```c
node* delete_back(node *temp)
{
    node *head = temp, *last;
    if(temp)
    {
        if (head->next != NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return temp;
    return head;
}
```

## [Delete Front and Check Underflow](../lab8/2.c)
```c
node* delete_front(node *temp)
{
    if(temp)
    {
        node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
```

## [Delete Value (Check Underflow and Not Found)](../lab8/3.c)
```c
Node* delete_value(Node *temp, int key)
{
    if (temp)
    {
        Node *head = temp, *prev;
        while(temp)
        {
            if(temp->value == key)
            {
                if(head == temp)
                {
                    head = temp->next;
                    free(temp);
                    return head;
                }
                else
                {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return temp;
}
```

## [Delete At (Check Underflow and index out of range)](../lab8/4.c)
```c
node* delete_at(node *temp, int pos)
{
    while(temp)
    {
        if(pos > 4 || pos < 1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos == 1)
            {
                node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                node *head = temp;
                node *prev, *next;
                int i = 1;
                while(i < pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}
```

## [Delete All / Clear Linked List](../lab8/5.c)
```c
node* clear(node *temp)
{
    node *clear;
    while(temp)
    {
        clear = temp;
        temp = temp->next;
        free(clear);
    }
    return NULL;
}
```
