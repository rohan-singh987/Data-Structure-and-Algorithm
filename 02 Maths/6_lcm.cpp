// LCM : Smallest no divisible by both elements

#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int result = max(a,b);
    while (true)
    {
        if (result % a == 0 && result % b == 0)
        {
            break;
        }
        result++;
    }
    return result;
}

int main(){

    cout<<lcm(4,6);

    return 0;
}