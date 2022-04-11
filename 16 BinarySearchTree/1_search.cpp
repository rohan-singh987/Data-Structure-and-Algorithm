#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};


bool searchBST(Node *root, int x)
{
    if(root == NULL)
    {return false;}
    
    else if (root->key == x)
    {
        return true;
    }

    else if (root->key > x)
    {
        return searchBST(root->left, x);
    }

    else{
        return searchBST(root->right, x);
    }
    
    
}


int main()
{
    Node *root = new Node(15);

    root->left = new Node(5);
    root->left->left = new Node(3);

    root->right = new Node(20);
    root->right->right = new Node(80);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);


    cout<<searchBST(root,16);


    return 0;
}