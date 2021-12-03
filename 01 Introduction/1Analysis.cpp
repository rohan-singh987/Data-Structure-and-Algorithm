#include<iostream>
using namespace std;


// Addition of n natural numbers

// Method -- 1
int fun1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
       return sum;
}

// Method -- 2
void fun2(int n)
{
    cout<<n*(n+1)/2;
}


int main(){

    int a;
    cout<<"Enter natural No: ";
    cin>>a;

    cout<<"Output by Function1: "<<fun1(a)<<endl;
    cout<<"Output by Function2: ";
    fun2(a);
     
    

    return 0;
}