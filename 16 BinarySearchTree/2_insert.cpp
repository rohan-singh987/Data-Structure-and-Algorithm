#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node (int x)
    {
        key = x;
        right = left = NULL;
    }
};

Node *insertBST(Node *root, int x)
{
    if(root == NULL)
    return new Node(x);

    else if (root->key > x)
    {
        root->left = insertBST(root->left, x);
    }

    else
    {
        root->right = insertBST(root->right, x);
    }

    return root;
    
}



int main()
{

    return 0;
}