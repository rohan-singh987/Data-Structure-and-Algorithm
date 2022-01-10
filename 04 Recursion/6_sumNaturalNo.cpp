#include<iostream>
using namespace std;


// int sumNaturalNo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     else{
//         return n*(n+1)/2;
//     }
// }

 int sumNaturalNo(int n)
 {
     if (n == 0)
    {
        return 0;
    }
    return n + sumNaturalNo(n-1);

 }

int main(){

    cout<<sumNaturalNo(5);

    return 0;
}