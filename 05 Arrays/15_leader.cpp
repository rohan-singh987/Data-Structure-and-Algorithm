#include<iostream>
using namespace std;

// Naive Solution
void leader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout<<arr[i]<<" "; 
        }
    }
}


// Efficient Solution
void leader2(int array[], int n)
{
    int curr_leader = array[n-1];
    cout<<curr_leader<<" ";

    for (int i = n-2; i >= 0; i--)
    {
        if (array[i] > curr_leader)
        {
            curr_leader = array[i];
            cout<<curr_leader<<" ";
        }
    }
}


int main(){

    int array[] = {7,10,4,10,6,5,2};
    leader(array,7);
    leader2(array,7);

    return 0;
}