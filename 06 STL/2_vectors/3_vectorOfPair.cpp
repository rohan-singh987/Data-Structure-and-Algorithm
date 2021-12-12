// Vector of Pairs

#include<bits/stdc++.h>
using namespace std;

void print_vecPair(vector<pair<int,int> >& v)
{
    cout<<"Size of vector"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;
}


int main(){
    
    vector<pair<int,int> > v_pair;

    print_vecPair(v_pair);

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v_pair.push_back(make_pair(x,y));
    }
    

    print_vecPair(v_pair);
}