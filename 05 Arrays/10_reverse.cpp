#include<iostream>
using namespace std;


void reverse(int arr[], int n)
{
    int low = 0, high = n-1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    
    low++;
    high--;
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
} 

int main(){

    int array[] = {1,2,3,4,5,6};

    reverse(array, 6);
    printArray(array,6);



    return 0;
}