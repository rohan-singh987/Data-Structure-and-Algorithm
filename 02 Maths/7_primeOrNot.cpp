// Prime Number: Number whose only divisior are number itself and 1 
//                 eg: 2,3,5,7,11,13........etc


#include<bits/stdc++.h>
using namespace std;

bool primeOrNot(int n)
{
    if (n==1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main(){

    cout<<primeOrNot(7);


    return 0;
}