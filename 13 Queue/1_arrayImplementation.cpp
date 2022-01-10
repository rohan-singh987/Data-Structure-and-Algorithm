#include<iostream>
using namespace std;

struct myQueue
{
    int size, cap;
    int *arr;

    myQueue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

        void enqueue(int data)
        {
            if (isFull())
            {
                return;
            }
            else{
                arr[size] = data;
                size++;
            }
        }
        
        void dequeue()
        {
            if (isEmpty())
            {
                return;
            }
            for (int i = 0; i < size-1; i++)
            {
                arr[i] = arr[i+1];
            }
                size--;
        }

        int getFront()
        {
            if (isEmpty())
            {
                return -1;
            }
            return 0;
        }

        int getRear()
        {
            if (isEmpty())
            {
                return -1;
            }
            return (size-1);
        }

        bool isFull()
        {
            return (size == cap);
        }

        bool isEmpty()
        {
            return (size == 0);
        }

        int getSize()
        {
            return (cap);
        }
       

};



int main()
{

    return 0;
}