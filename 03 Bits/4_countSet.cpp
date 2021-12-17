#include<iostream>
using namespace std;

int countSet_1(int n)
{
    int res = 0;
    while (n > 0)
    {
        if(n % 2 != 0)      // res = res + (n & 1)
        res++;
        n = n/2;                // n = n>>1
    }
    return res;
}


// Bian Kerningam's Algorithm
int countSet_2(int n)
{
    int res = 0;
    while (n>0)
    {
        n = (n&(n-1));
        res++;
    }
    return res;
}


int main(){

    cout<<countSet_1(5);
    cout<<countSet_2(40);


    return 0;
}