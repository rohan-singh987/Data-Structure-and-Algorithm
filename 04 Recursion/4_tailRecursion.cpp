// Tail Recursive function :

#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    
}

int factTailRecursive(int n, int k)
{
    if (n==0 || n==1)
    {
        return k;
    }
    else{
        return factTailRecursive(n-1, k*n);
    }
    
}

int main(){

    cout<<fact(3)<<endl;
    cout<<factTailRecursive(3,1);

    return 0;
}