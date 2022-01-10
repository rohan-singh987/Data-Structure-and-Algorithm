#include<iostream>
using namespace std;

int isPalindrome(string &str, int start, int end )
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end] && isPalindrome(str, start+1, start-1));
}


int main(){

    string str = "abba";
    cout<<isPalindrome(str, 0, 3);
    return 0;
}