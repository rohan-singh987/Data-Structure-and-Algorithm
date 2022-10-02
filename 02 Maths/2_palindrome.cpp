// Palindrome Number -:  if reverse of any number is same as  orginal number then it is called as palindrome number
//                       (Moving from Right to Left == Left to write)

/*
    Idea : 
            Traverse digit from right to left to find reverse of given number
            ---> Last Digit (x % 10)
            ---> Remaining (x / 10)
*/

#include<iostream>
using namespace std;

bool isPalindrome(int n)  
{
    int rev = 0;
    int temp = n;

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp/10;
    }
    return (rev == n);
}

int main(){

    int n = 78987;
    
    cout<<isPalindrome(n);


    return 0;
}