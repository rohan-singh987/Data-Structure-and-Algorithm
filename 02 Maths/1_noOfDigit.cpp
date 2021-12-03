#include<iostream>
#include<math.h>
using namespace std;


// Iterative Method
int countDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n/10;
        count++;
    }
    return count;
}

// Recursive Method
int countDigit2(long n)
{
    if (n == 0)
    {return 0;}
    return 1 + countDigit2(n/10);
}

// Logarithmic Method
int CountDigit3(long n)
{
    return floor(log10(n)+1);
}

int main(){
    int n = 4;

    cout<<countDigit(12345678910)<<endl;
    cout<<countDigit2(12345678910)<<endl;
    cout<<CountDigit3(12345678910)<<endl;




    return 0;
}