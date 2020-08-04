
/**
Name -> Shamima Akther
ID -> 1834902616
**/

/* Queue implementation using c++ language */

#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

void display(queue <int> q);

int main()
{
    queue <int> q;
    int option,value;
    do
    {
        system(" cls ");

        cout<< "\n Choose Operations For Queue: "<< endl;
        cout<< " 1 : Display"<< endl;
        cout<< " 2 : Empty"<< endl;
        cout<< " 3 : Size"<< endl;
        cout<< " 4 : Top"<< endl;
        cout<< " 5 : Push"<< endl;
        cout<< " 6 : Pop"<< endl;
        cout<< " 7 : Exit Program"<< endl;

        cout <<"\n Enter your Option : ";
        cin >> option;

        if(option == 1)
        {
            if(q.empty())
            {
                cout <<"\n Queue is empty."<< endl;
            }
            else
            {
                display(q);
            }
            getchar();
            cout <<"\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 2)
        {
            if(q.empty())
            {
                cout << "\n Queue is empty." << endl;
            }
            else
            {
                cout << "\n Queue is not empty." << endl;
            }

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 3)
        {
            cout << "\n Size of Queue is : " << q.size() << endl;

            getchar();
            cout <<"\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if (option == 4)
        {
            if(q.empty())
            {
                cout <<"\n Queue is empty,No top element."<< endl;
            }
            else
            {
                cout <<"\n Top : "<< q.front()<< endl;
            }

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 5)
        {
            cout << " Enter Queue Element : ";
            cin >> value;

            q.push(value);

            cout << endl ;
            cout <<" "<< value <<" Data inserted." << endl ;

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 6)
        {

            if(q.empty())
            {
                cout << "\n There is No element." << endl;
            }
            else
            {
                q.pop();
                cout << "\n The element is deleted." << endl;
            }
            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            cout << "\n Invalid Option, Please Enter Correct Option Between 1 to 7"<< endl;

            getchar();
            cout << "\n Press Enter to Continue the program...\n"<< endl;
            getchar();
        }
    }
    while(option != 7);
    return 0;
}

void display(queue <int> q)
{
     cout << endl;

    while (!q.empty())
    {
        cout << " " << q.front();
        q.pop();
    }
    cout << endl;
}
