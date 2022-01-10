#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void reverseQueue (queue<int> &q )
{
    stack<int> s;
    while (q.empty() == false)
    {
        s.push(q.front());
        q.pop();
    }
    while (s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
    
    while (q.empty() == false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}

int main()
{
    queue<int> qu;
    qu.push(11);
    qu.push(22);
    qu.push(33);
    qu.push(44);
    reverseQueue(qu);


    return 0;
}

