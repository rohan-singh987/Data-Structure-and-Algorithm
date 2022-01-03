#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};


struct myStack
{
    Node *head;
    int size;
    myStack()
    {
        head = NULL;
        size = 0;
    }

        void push(int x)
        {
            Node *temp = new Node(x);
            temp ->next = head;
            head = temp;
            size++;
        }

        int pop()
        {
            if (head == NULL)
            {
                return INT_MAX;
            }
            int res = head->data;
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
            return res;
        }

        int sizee()
        {
            return size;
        }

        bool isEmpty()
        {
            return (head = NULL);
        }

        int peek()
        {
            if (head == NULL)
            {
                return INT_MAX;
            }
            return head->data;
        }
};



int main()
{
    myStack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;


    

    return 0;
}