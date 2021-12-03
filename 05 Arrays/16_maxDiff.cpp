// Maximum diffrence -: 
//      maximum value of arr[j] - arr[i] such that j > i

#include<iostream>
using namespace std;

// Naive Solution
int maxDiff(int arr[], int n)
{
    int diff = arr[1] - arr[0];
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            diff = max( diff, (arr[j] - arr[i]));
        }
        
    }
    return diff;
}


// Efficienct Solution
int maxDiff2(int array[], int n)
{
    int diff = array[1] - array[0] , minValue = array[0];
    for (int j = 0; j < n; j++)
    {
        diff = max(diff, (array[j] - minValue));
        minValue = min(minValue, array[j]);
    }
    return diff;
}


int main(){

    int array[] = {2,3,10,6,4,8,1};
    cout<<maxDiff(array, 7)<<endl;
    cout<<maxDiff2(array, 7)<<endl;
 

    return 0;
}