#include <iostream>
using namespace std;

struct myStack
{
    int *arr;
    int capacity;
    int top;

    myStack(int c)                          // Constructor giving size of array
    {   
        capacity = c;                       // capacity = c
        arr = new int[capacity];            // assigning size to array
        top = -1;                           // Intializing top of array with -1 (as array start with 0)
    }

        void push(int x)
        {
            if (top == capacity-1)
            {
                cout<<"error stack is already full"<<endl;
            }
            
            top++;
            arr[top] = x;
        }

        int pop()
        {
            if (top == -1)
            {
                cout<<"error stack is empty"<<endl;
            }
            
            int result = arr[top];
            top--;
            return result;
        }

        int peek()
        {
            return arr[top];
        }

        int size()
        {
            return (top+1);
        }

        bool isEmpty()
        {
            return(top == -1);
        }


};



int main()
{

    myStack s(5);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;

    s.push(66);
    return 0;
}