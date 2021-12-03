#include<iostream>
using namespace std;


bool sorted1(int arr[], int n)
{
    int ele = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[ele])
        {
            return 0;
            break;
        }
        else{

            ele = i;
        }
    }
    return 1;
}


// Naive Solution
bool sorted2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

// Efficient Solution
bool sorted3(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}


int main(){

    int array[] = {8};
    int array1[] = {1,2,3,132,3,12,6};
    int array2[] = {1,2,3,4,5,6,7};
    int array3[] = {8,10,111,3};

    cout<<sorted1(array,1)<<endl;
    cout<<sorted1(array1,7)<<endl;
    cout<<sorted1(array2,7)<<endl;
    cout<<sorted1(array3,3)<<endl;

    cout<<"---------"<<endl;

    cout<<sorted2(array,1)<<endl;
    cout<<sorted2(array1,7)<<endl;
    cout<<sorted2(array2,7)<<endl;
    cout<<sorted2(array3,3)<<endl;
    
    cout<<"---------"<<endl;

    cout<<sorted3(array,1)<<endl;
    cout<<sorted3(array1,7)<<endl;
    cout<<sorted3(array2,7)<<endl;
    cout<<sorted3(array3,3)<<endl;


    return 0;
}