#include<iostream>
using namespace std;


bool subSequence(string str1, string str2)
{
    int j = 0;

    cout<<"Length Of string1: "<<str1.length()<<"  ";
    cout<<"Length Of string2: "<<str2.length()<<endl;
    for (int i = 0; i < str1.length() && j< str2.length(); i++)
    {
        if (str1[i] == str2[j] )
        {
            j++;
        }
    }
    return(j == str2.length());
}


int main()
{

    cout<<subSequence("ABCDEF", "ACE")<<endl;
    cout<<subSequence("Hakuna Matata", "Hkat")<<endl;
    cout<<subSequence("ABCDEF", "ACBD")<<endl;

    return 0;
}