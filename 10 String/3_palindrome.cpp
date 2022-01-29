#include<iostream>
using namespace std;

// Naive Soluiton
bool palindrome(string str)
{
    int begin = 0;
    int end = str.length() - 1;
    for (int i = 0; i <= end; i++)
    {
        if (str[begin] == str[end])
        {
            return true;
            begin++;
            end--;
        }
        
    }
    return false;
}


int main()
{

    cout<<palindrome("abcba")<<endl;
    cout<<palindrome("abbac")<<endl;
    cout<<palindrome("palin")<<endl;
    cout<<palindrome("abba")<<endl;
    cout<<palindrome("matatam")<<endl;


    return 0;
}