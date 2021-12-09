#include<bits/stdc++.h>
using namespace std;

void oneToN(int n)
{
    if (n == 0)
    {
        return;
    }

    else{
        oneToN(n-1);
        cout<<n<<" ";
    }
    
}


int main(){

    oneToN(4);

    return 0;
}