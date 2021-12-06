/*
    Left Shift Operator   <<    if we assume that the leading y bits are 0, then (x<<y) = "x*2^y"
    Right Shift Operator  >>
*/

#include<iostream>
using namespace std;

int main(){

// Left Shift Operator <<
    int x = 3;                  // X = 3 = 00...0011
    cout<<(x<<1)<<endl;         // x<<1 = 00...0110     3*2 = 6     (left shift by 1)
    cout<<(x<<2)<<endl;         // x<<2 = 00...1100     3*2^2 = 12  (left shift by 2)

    int y = 4;
    int z = (x<<y);             // x<<y(4) = 00...110000  3*2^4 = 48     (left shift by y)
    cout<<z<<endl;


// Right Shift Operator >>
    int a = 33;                 // x = 33 = 00...010
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;

    int b = 4;
    int c = (a>>b);
    cout<<c<<endl;
    return 0;
}