// GCD (Greatest Common Divisior)
// we have two elements A and B, we have to find out maximum number which divides both elements

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int result = min(a,b);
    while (result > 0)
    {
        if (a%result == 0 && b%result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main(){

    cout<<gcd(10,20)<<endl;
    cout<<gcd(7,12)<<endl;

    return 0;
}