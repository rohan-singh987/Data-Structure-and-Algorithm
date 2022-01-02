#include<iostream>
#include<vector>

using namespace std;


struct myStruct
{
    vector<int> v;

        void push(int x)
        {
            v.push_back(x);
        }

        int pop(int x)
        {
            int result = v.back();
            v.pop_back();
            return result;
        }

        int size()
        {
            return v.size();
        }
        
        bool isEmpty()
        {
            return v.empty();
        }

        int peek()
        {
            return v.back();
        }

};



int main()
{


    return 0;
}