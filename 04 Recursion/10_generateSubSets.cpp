#include<iostream>
#include<string>
using namespace std;

void subSet(string s, string curr, int i)
{
    if (i == s.length())
    {
        cout<<s<<"  ";
        return;
    }
    subSet(s, curr, i+1);
    subSet(s, curr+s[i], i+1);
}


int main(){

    string str = "abc";
    subSet(str, " ", 0);

    return 0;
}