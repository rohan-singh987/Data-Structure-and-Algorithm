#include<iostream>
using namespace std;


// Naive Solution
int maxOneConsutively(int array[], int n)
{
    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (array[j] == 1)
            {
                curr++;
            }
            else{break;}
        }
        res = max(res, curr);
    }
    return res;
}


// Efficient Solution
int maxOneConsutively2(int array[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 1)
        {
            curr = 0;
        }
        else{
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main(){

    int arr[] = {1,1,1,3,4,1,2,0,1,1,1,1,9};

    cout<<maxOneConsutively(arr,13)<<endl;
    cout<<maxOneConsutively2(arr,13)<<endl;



    return 0;
}