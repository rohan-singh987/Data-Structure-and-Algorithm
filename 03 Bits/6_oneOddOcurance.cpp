// we have array of elements we have to find only odd occuring number


#include<bits/stdc++.h>
using namespace std;

// Naive soluiton
void oddOcurance(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }    
        }
        if (count % 2 != 0)
        {
            cout<< array[i];
        } 
    }
}



int main(){

    int array[] = {2,3,3,4,4,4,4};
    oddOcurance(array, 7);


    return 0;
}