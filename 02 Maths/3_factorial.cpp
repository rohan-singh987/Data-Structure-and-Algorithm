// n! = 1*2*3*4*.......(n-1)*n


#include<iostream>
using namespace std;


// Iterative Solution
void factorial (int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<fact;
}



// Recursive Solution
int factorial2 (int n){
    if (n==0)
    {
        return 1;
    }
    return n*factorial2(n-1);
}



int main(){

    factorial(5);
    cout<<endl;
    cout<<factorial2(4);

    return 0;
}