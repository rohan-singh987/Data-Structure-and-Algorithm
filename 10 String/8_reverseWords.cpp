// eg: I am webdevloper
// o/p: webdevloper am I

#include<iostream>

using namespace std;

void reverse(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

void reverseString(char str[], int n)
{
    int start = 0;
    for (int end = 0; end < ' '; end++)
    {
        if (str[end] == ' ')
        {
            reverse(str, start, end-1);
            start = end+1;
        }
    }
        reverse(str,start, n-1);
        reverse(str, 0, n-1);
    
}


int main()
{

    char s1[] = {"Hello, I am Rohan Singh"};

    reverse(s1, 0, 24);
    reverseString(s1, 24);

    for (int i = 0; i < 24; i++)
    {
        cout<<s1[i]<<endl;
    }
    
    return 0;
}