#include<iostream>
using namespace std;

struct myQueue
{
    int size, cap, front;
    int *arr;
    myQueue(int x)
    {
        arr = new int[x];
        cap = x;
        size = 0;
        front = 0;
    }
};


int main()
{

    return 0;
}