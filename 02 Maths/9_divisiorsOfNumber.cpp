#include<bits/stdc++.h>
using namespace std;

void divisior(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
        }
    }
}


int main(){

    divisior(6);


    return 0;
}