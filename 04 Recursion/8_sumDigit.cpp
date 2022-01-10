//  n % 10 --> gives last digit of n;
//  n/10   --> removes last digit of n

#include<iostream>
using namespace std;

int sumOfDgit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sumOfDgit(n/10) + n%10; 
}

int main(){

    cout<<sumOfDgit(155);

    return 0;
}