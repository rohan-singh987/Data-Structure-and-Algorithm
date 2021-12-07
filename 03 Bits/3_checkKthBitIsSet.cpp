// Check if Kth bit is set(1) or not 

#include<bits/stdc++.h>
using namespace std;


// Using Left shift Operator
void kthBit(int n, int k)
{
    if (n & (1 << (k-1)) != 0)
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}


// Using Right Shift Operator
void kthBit2(int n, int k)
{
    if ((n>>(k-1) & 1) == 1)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main(){

    kthBit(5,3);
    kthBit2(5,3);

    return 0;
}