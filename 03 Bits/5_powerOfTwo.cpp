#include<bits/stdc++.h>
using namespace std;

// Naive Solution

bool powerTwo(int n)
{
    if(n==0)
    {return false;}

    while (n != 1)
    {
        if (n%2 != 0)
        {
            return false;
        }
        n = n/2;
    }
    return true;
}


// Bian Kerningam's Algorithm
bool powerTwo_2(int n)
{
    if(n==0)
    return true;
    
    return((n & (n-1)) == 0);
}

int main(){

    cout<<powerTwo(4)<<endl;
    cout<<powerTwo(6)<<endl;


    cout<<powerTwo_2(3)<<endl;
    cout<<powerTwo_2(16)<<endl;


    return 0;
}