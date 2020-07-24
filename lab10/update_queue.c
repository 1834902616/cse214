/**
Name -> Shamima Akther
ID -> 1834902616
**/

/*
 Design a "Queue Data Structure" using Linked List in C programming Language.
*/

#include <stdio.h>
#include <stdlib.h>
#include "update_queue_header_file.h"

void menu();
void display_queue(node *temp);
void empty();
void queue_size(node *temp);
void top(node *temp);
node* push(node *temp, int value);
node* pop(node *temp);

int main()
{
    menu();

    return 0;
}

void menu()
{
    node *head = NULL; // Create an empty queue.
    int value, option;
    do
    {
        enum Queue_operations {Display = 1,Empty,Size,Top,Push,Pop,Exit};
        system(" cls ");
        printf("\n Choose Operations for 'Queue' from below: \n");
        printf("\n %d : Display Queue",Display);
        printf("\n %d : Empty",Empty);
        printf("\n %d : Size",Size);
        printf("\n %d : Top",Top);
        printf("\n %d : Push",Push);
        printf("\n %d : Pop",Pop);
        printf("\n %d : Exit Program",Exit);

        printf("\n");

        printf("\n Enter your Option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            printf("\n");
            display_queue(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 2)
        {
            empty(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 3)
        {
            queue_size(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 4)
        {
            top(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 5)
        {
            printf(" Enter Queue Element : ");
            scanf("%d", &value);

            head = push(head,value);
            printf("\n\t\t*** %d, Data inserted in Queue. ***",value);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if(option == 6)
        {
            head = pop(head);

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\n\t *** Invalid Option, Please Enter Correct Option Between '1 to 7' ***");

            getchar();
            printf("\n\n Press 'Enter' to Continue the program...\n");
            getchar();
        }
    }
    while(option != 7);
}
