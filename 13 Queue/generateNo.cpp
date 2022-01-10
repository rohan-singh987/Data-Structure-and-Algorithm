// we have given n we have to create digit using { 5,6 } 
/*
    input:    n = 4
    output:   [5, 6, 56, 65]
    
    input:    n = 10
    output:   [5, 6, 55, 56, 65, 66, 555, 556, 565, 566]

*/

#include<iostream>
#include<queue>
using namespace std;

void generateNo(int n)
{
    queue<string> q;
    q.push("5");
    q.push("6");

    for (int count = 0; count < n; count++)
    {
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}


int main()
{

    generateNo(30);

    return 0;
}

