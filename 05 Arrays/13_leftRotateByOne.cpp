#include<iostream>
using namespace std;

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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

    leftRotateByOne(arr,7);
    printArr(arr, 7);



    return 0;
}