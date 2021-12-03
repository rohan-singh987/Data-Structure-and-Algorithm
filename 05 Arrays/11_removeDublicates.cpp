// Remove Dublicates form sorted array

#include<iostream>
using namespace std;

int remDub(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        arr[i] = temp[res] ;
    }
    return res;
}



int main(){

    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    cout<<remDub(array, n);
    

    return 0;
}