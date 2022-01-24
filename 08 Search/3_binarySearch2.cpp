#include<iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    
    int mid = (low + high)/2;
    if (array[mid] == key)
    {
        return mid;
    }
    else if (array[mid] > key)
    {
        return binarySearch(array,low, mid-1, key);
    }
    else
    {
        return binarySearch(array, mid+1, high, key);
    }
}


int main()
{

    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key;
    cout<<"enter element to be search: ";
    cin>>key;
    cout<<binarySearch(array,0,n,key);
    
    

    return 0;
}