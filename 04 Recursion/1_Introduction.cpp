/*

Iterative code and Recursive code generally have same expressive power

    Applications of Recursion
        1. Algorithm technique based on recursion
            ---> Dynamic Programming
            ---> Backtracking
            ---> Divide and Conquer (Binary Search, Quick Sort and Merge Sort)

        2. Many problems inherently recursive
            ---> Tower of Hanaoi
            ---> DFS based transversals
*/



#include<bits/stdc++.h>
using namespace std;

void fun()
{
    cout<<"Hii"<<"    ";
    fun();
}

int main(){

    fun();


    return 0;

}