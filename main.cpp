/// FCAI – OOP – 2022 - Assignment 3
/// Program Name: template stack.cpp
/// Author and ID: Yousef Alaa Rabea 20210476


#include <bits/stdc++.h>
using namespace std;
#define siz  5

template<typename t>
class Stack
{
private:
    int top;
    t arr[siz];
public:
    Stack()
    {
        top = -1;
    }

    bool isfull()
    {
        if(top == (siz - 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool isempty()
    {
        if(top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(t word)
    {
        if(isfull())
        {
            cout<<"the stack is full"<<endl;
        }
        else
        {
            top++;
            arr[top]=word;
            cout<<"Element "<<arr[top]<<" is inserted"<<endl;
        }
    }

    t pop()
    {
        if(isempty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            t removed_element = arr[top];
            top--;
            return removed_element;
        }
    }

    t topelement()
    {
        return arr[top];
    }

    int stack_size()
    {
        return top+1;
    }
};


int main()
{
    Stack<int> int_stack;
    Stack<string> str_stack;

    cout << "Hello :)" << endl;
    while(true)
    {
        cout<<"1- Push"<<endl<<"2- Pop"<<endl<<"3- Check top element"<<endl<<
            "4- Size"<<endl<<"5- exit"<<endl;
        int ch;
        cin>>ch;
        if(ch == 1)
        {
            int_stack.push(2);
            int_stack.push(54);
            int_stack.push(255);
            int_stack.push(30);
            int_stack.push(20);
            int_stack.push(10);

            str_stack.push("Welcome");
            str_stack.push("to");
            str_stack.push("GeeksforGeeks");
        }
        else if(ch == 2)
        {
            cout << int_stack.pop() << " is removed from stack"
                 << endl;

            cout << str_stack.pop() << " is removed from stack "
                 << endl;
        }
        else if(ch == 3)
        {
            cout << "Top element in integer stack is " << int_stack.topelement()
                 << endl;

            cout << "Top element in string stack is " << str_stack.topelement()
                 << endl;
        }
        else if(ch == 4)
        {
            cout << "The integer stack size is " << int_stack.stack_size()
                 << endl;

            cout << "The string stack size is " << str_stack.stack_size()
                 << endl;
        }
        else
            return 0;

        cout<<"You want another operation?\n"<<"1- Yes\n0- No"<<endl;
        int n;
        cin>>n;

        if(n == 0)
        {
            return 0;
        }
    }
}

