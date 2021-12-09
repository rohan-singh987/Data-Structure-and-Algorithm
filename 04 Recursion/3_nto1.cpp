#include<Bits/stdc++.h>
using namespace std;

void ntoOne(int n)
{
    if (n==0)
    {
        return;
    }
    else{
        cout<<n<<" ";
        ntoOne(n-1);
    }
}

int main(){

    ntoOne(4);


    return 0;
}