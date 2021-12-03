#include<iostream>
using namespace std;


void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n-d+i] = temp[i];
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int array[] = {1,0,3,4,0,5,0};

    leftRotate(array,7,4);
    printArr(array, 7);


    return 0;
}