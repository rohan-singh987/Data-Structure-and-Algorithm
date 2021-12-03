#include<iostream>
using namespace std;

void frequency(int array[], int n)
{
    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        while(i < n && array[i] == array[i-1])
        {
            i++;
            freq++;
        }
        cout<<array[i-1]<<" "<<freq<<endl;
        freq = 1;
    }
    
    if (n==1 || array[n-1] != array[n-2])
    {
        cout<<array[n-1]<<" "<<1;
    }
}


int main(){
    int array[] = {10,10,10,30,30,40};

    frequency(array, 6);



    return 0;
}