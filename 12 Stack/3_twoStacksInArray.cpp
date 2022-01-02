// We are given an array, we need to implement two stacks in it

#include<iostream>
#include<stack>

using namespace std;

struct twoStack
{
    int *arr, cap, top1, top2;
    twoStack(int n)
    {
        cap = n;
        arr = new int[n];
        top1 = -1;
        top2 = cap;
    }

        void push1(int x)
        {
            if (top1 < top2-1)
            {
                top1++;
                arr[top1] = x;
            }
        }
        void push2(int x)
        {
            if (top1 < top2-1)
            {
                top2--;
                arr[top2] = x;
            }
        }

        int pop1()
        {
            if (top1 >= 0)
            {
                int temp = arr[top1];
                top1--;
                return temp;
            }   
            else{
                exit(1);
            }
        }
        int pop2()
        {
            if (top2 < cap)
            {
                int temp = arr[top2];
                top2++;
                return temp;
            } 
            else{
                exit(1);
            }  
        }
};


int main()
{
    twoStack s(5);

    s.push1(11);
    s.push2(55);
    s.push1(22);
    s.push2(44);
    s.push1(33);

    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop1()<<endl;


    return 0;
}