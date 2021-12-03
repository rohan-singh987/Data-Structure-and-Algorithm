#include<iostream>
using namespace std;


// Naive Solution
void movZeros(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }   
            }   
        }   
    }
}


// Efficient SOlution
void movZeros2(int arr[],int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
        
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

    movZeros(arr,7);
    printArr(arr, 7);

    int array[] = {1,23,0,0,0,13,0,23,0230,232,323,23,3,0};
    movZeros2(array,14);
    printArr(array, 14);


    return 0;
}