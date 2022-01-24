#include<iostream>
using namespace std;

// Naive
int last_occur(int array[], int n, int key)
{
    for (int i = n-1; i >= 0; i--)
    {
        if (array[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}

int lastOccur(int array[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if (array[mid] == key)
    {
        if (array[mid + 1] == key)
        {
            return lastOccur(array, mid+1, high, key);
        }
        else{return mid;}
    }
    else if (array[mid] > key)
        {
            return lastOccur(array, low, mid-1, key);
        }
    else{
        return lastOccur(array, mid+1, high, key);
    }
}

int main()
{
    int arr[] = {10,15,20,20,40,40};
    cout<<last_occur(arr,7, 20)<<endl;

    cout<<lastOccur(arr, 0, 7, 20)<<endl;
    // int arr[] = {10,15,20,20,40,40};

    return 0;
}