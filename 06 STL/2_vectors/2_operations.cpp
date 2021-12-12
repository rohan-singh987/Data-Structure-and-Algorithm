#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> vec)
{
    cout<<"size of vector: "<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}


int main(){

    vector<int> v(5);
    print_vector(v);        // Printing 0 vector of size 5

    v.push_back(12);        // Even after declaring size of array we can add elements and can increase the size
    print_vector(v);
    
    cout<<"After using pop_back() in v we remove last element and can reduce size of vector"<<endl;
    v.pop_back();
    print_vector(v);

    vector<int> v2(5, 2);       // Declaring vector of 2 with size 5
    print_vector(v2);


}