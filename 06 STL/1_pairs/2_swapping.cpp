/*
    Suppose we have two arrays a[1,2,3] && b[2,3,4] 
    a and b is connected like 
        --> a[0] = 1 is related to b[0] = 2
        --> a[1] = 2 is related to b[1] = 3
        --> a[2] = 3 is related to b[2] = 4
Now our qus is to "swap a[0] with a[2]" and as a is connected to b we have to "swap b[0] with b[2]"
*/

#include<bits/stdc++.h>
using namespace std;

int main(){


    int a[] = {1,2,3};
    int b[] = {2,3,4};



    pair<int,int> p_array[3];
    p_array[0] = make_pair(1,2);
    p_array[1] = make_pair(2,3);
    p_array[2] = make_pair(3,4);

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    cout<<"After Swapping: "<<endl;
    
    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }



}