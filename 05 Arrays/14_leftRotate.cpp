#include<iostream>
using namespace std;

void leftByone(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}



void leftRotate(int array[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftByone(array,n);
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

    int arr[] = {1,0,3,4,0,5,0};

    leftRotate(arr,7,4);
    printArr(arr, 7);


    return 0;
}