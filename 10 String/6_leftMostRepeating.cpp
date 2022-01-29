#include<iostream>
using namespace std;

// Naive
int leftRepeating(string str)
{
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i+1])
        {
            return i;
        }
    }
    return -1;
}


// Better
const int CHAR = 256;
int left_repeat(string str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] > i)
        {
            return i;
        }   
    }
    return -1;   
}


// Efficient



int main()
{

    cout<<leftRepeating("abbca")<<endl;
    cout<<left_repeat("abbc")<<endl;

    return 0;
}