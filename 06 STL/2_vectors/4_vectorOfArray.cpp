// Suppose we have to  make 3 arrays 

#include<bits/stdc++.h>
using namespace std;


void print_vector(vector<int> v)
{
    cout<<"size of array"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int N;
    cin>>N;         // N = Number of arrays

    vector<int> v[N];

    for(int i = 0; i< N; ++i)
    {
        int n;      // n = number of elements in each array
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        print_vector(v[i]);
    }
    
}