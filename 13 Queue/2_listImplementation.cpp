// Hear we are taking head as front and tail as rear to do queue in O(1)

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

struct myQueue
{
    Node *front, *rear;
    myQueue()
    {
        front = rear = NULL;
    }

        void enqueue(int x)
        {
            Node *temp = new Node(x);
            if (front == NULL)
            {
                front = rear = temp;
            }
            rear->next = temp;
            rear = temp;
        }

        void dequeue()
        {
            if (front == NULL)
            {
                return;
            }
            
            Node *temp = front;
            front = front->next;
            if (front == NULL)
            {
                rear = NULL;
            }
            
            delete temp;
        }
};




int main()
{


    return 0;
}