#include<bits/stdc++.h>
using namespace std;

void printvect(vector<int> v)
{
    cout<<"size of vector: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<< " ";
    }
    cout<<endl; 
}

int main(){

    int a[10];              // declaring array of size 10
    vector<int> vect;       // declaring dynamic size array starting from size 0

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        printvect(vect);
        vect.push_back(x);      // function to add element at end
    }

    printvect(vect);

}