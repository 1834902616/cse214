/**
Name -> Shamima Akther
ID -> 1834902616
**/

/* Stack implementation using c++ language */

#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>s);

int main()
{
    stack <int> s;
    int option,value;
    do
    {
        system(" cls ");

        cout<< "\n Choose Operations For Stack: "<< endl;
        cout<< " 1 : Display"<< endl;
        cout<< " 2 : Empty"<< endl;
        cout<< " 3 : Size"<< endl;
        cout<< " 4 : Top"<< endl;
        cout<< " 5 : Push"<< endl;
        cout<< " 6 : Pop"<< endl;
        cout<< " 7 : Exit Program"<< endl;

        cout <<"\n Enter your Choice : ";
        cin >> option;

        if(option == 1)
        {
            if(s.empty())
            {
                cout <<"\n Stack is empty."<< endl;
            }
            else
            {
                display(s);
            }
            getchar();
            cout <<"\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 2)
        {
            if(s.empty())
            {
                cout << "\n Stack is empty." << endl;
            }
            else
            {
                cout << "\n Stack is not empty." << endl;
            }

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 3)
        {
            cout << "\n Size of stack is : " << s.size() << endl;

            getchar();
            cout <<"\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if (option == 4)
        {
            if(s.empty())
            {
                cout <<"\n Stack is empty,No top element."<< endl;
            }
            else
            {
                cout <<"\n Top : "<< s.top()<< endl;
            }

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 5)
        {
            cout << " Enter Stack Element : ";
            cin >> value;

            s.push(value);

            cout << endl ;
            cout <<" "<< value <<" Data inserted." << endl ;

            getchar();
            cout << "\n Press Enter to Continue the program..."<< endl;
            getchar();
        }
        else if(option == 6)
        {

            if(s.empty())
            {
                cout << "\n There is No element." << endl;
            }
            else
            {
                s.pop();
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

void display(stack<int>s)
{
    cout << endl << " ";

    while(!s.empty())
    {
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;
}
