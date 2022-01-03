#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(11);
    s.push(22);
    s.push(33);
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    while (s.empty() == false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    


    return 0;
}