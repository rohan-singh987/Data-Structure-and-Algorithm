#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> ::iterator itr = v.begin();
    // cout << (*itr + 1) << endl;
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << (*itr) << " ";
    }
    cout<<endl;
    

    return 0;
}