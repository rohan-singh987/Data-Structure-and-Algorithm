#include<iostream>
#include<string>
using namespace std;

// Naive Soluiton
bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return(s1 == s2);
}


int main()
{

    string str1 = "rohan";
    string str2 = "hanor";
    cout<<anagram(str1, str2);



    return 0;
}