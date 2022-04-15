#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node (int x)
    {
        key = x;
        left = right = NULL;
    }
};



int main()
{

    Node *root = new Node(2);
    root ->left = new Node(10);
    root ->right = new Node(20);
    
    root ->left ->left = new Node(30); 
    root ->left ->right = new Node(40);

    root ->right ->left = new Node(50);
    root ->right ->right = new Node(60);

    return 0;
}