/* Define a function to print single node (Address,Value,
and Next Address) of the Linked List and do the same as
problem 1.(Use 'typedef' keyword, Don't use DMA) */

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void print_node(node *p);

int main()
{
    node a, b, c;
    node *head = NULL;

    head = &a;

    a.value = 1;
    a.next = &b;
    print_node(&a);

    b.value = 2;
    b.next = &c;
    print_node(&b);

    c.value = 3;
    c.next = NULL;
    print_node(&c);

    return 0;
}
void print_node(node *p)
{
    printf("%p \t %d \t %p\n", p, p->value, p->next);
}







/*void print_linked_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}
*/
