

#include<iostream>
using namespace std;


// Naive Solution
int zerosInFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    int result = 0;
    while (fact % 10 == 0)
    {
        result++;

        fact = fact/10;
    }
    return result;
}


// Efficient Solution


int main(){

    cout<<zerosInFactorial(10);

    return 0;
}