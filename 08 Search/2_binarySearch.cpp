#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key)
{
    int high, low;
    low = 0;
    high = n-1;

    while (low <= high)
    {
        int mid = (low + high)/2;
        
        if (array[mid] == key)
        {
            return mid;
        }
        
        else if (array[mid] > key)
        {
            high = mid - 1;
        }

        else
        {
            low = mid+1;
        }   
    }
    return -1;
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
    cout<<binarySearch(array,n,key);
    
    

    return 0;
}