#include<iostream>
using namespace std;

int vowels(char *str)
{
    int count = 0;
    while ((*str) != '\0') {
  
        if (*str == 'a' || *str == 'e' || *str == 'i'
            || *str == 'o' || *str == 'u') {
            count++;
        }
        str++;
    }
  
    return count;
}


int main()
{

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char s;
        cin>>s;
        char str[s];

        cout<<vowels(str);
    }
    

    return 0;
}