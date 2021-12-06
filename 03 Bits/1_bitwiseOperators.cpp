/*
There are total 6 Bitwise Operators in c++
    1. Bitwise And  &   (It produces output 1 only when both the input are 1)
    2. Bitwise OR   |   (It produces output 1 when any of the input is 1)
    3. Bitwise XOR  ^   (It produces output 1 only when booth the inputs are different like 0,1 or 1,0)

*/

#include<iostream>
using namespace std;

int main(){
    int x = 3, y = 6;

    /*
        x = 3   y = 6
        x = 00...0011
        y = 00...0110
    */

    cout<<(x & y)<<endl;        // x&y (3&6) = 00...0010 = 2
    cout<<(x | y)<<endl;        // x|y (3|5) = 00...0111 = 7
    cout<<(x ^ y)<<endl;        // x^y (3^5) = 00...0101 = 5

    return 0;
}