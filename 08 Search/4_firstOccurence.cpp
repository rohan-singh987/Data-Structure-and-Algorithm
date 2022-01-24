#include<iostream>
using namespace std;

// Naive Solution
int firstOccur(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}

// Efficient Code
int first_occur(int array[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    
    int mid = (low+high)/2;
    if (array[mid] == key)
    {
        if (array[mid - 1] == key)
        {
            return first_occur(array, low, mid-1, key);
        }
        else{return mid;}
    }
    else if (array[mid] > key)
        {
            return first_occur(array, low, mid-1, key);
        }
    else{
        return first_occur(array, mid+1, high, key);
    }
    
}

int main()
{
    int arr[] = {5, 10, 10, 10, 15, 20, 20};
    cout<<firstOccur(arr, 7, 10)<<endl;


    cout<<first_occur(arr,0, 7, 20)<<endl;

    int asd[] = {5,5,5, 8,8,9,10,10};
    cout<<first_occur(asd, 0, 8, 8)<<endl;

    
    int array[] = {5,5,5};
    cout<<first_occur(array, 0,3,5)<<endl;
}