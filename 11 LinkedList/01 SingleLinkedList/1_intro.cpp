#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout<<(curr ->data)<<" ";
       curr = curr -> next;
    }
    
}


int main(){

    Node *head = new Node (12);
    head ->next = new Node(13);
    head ->next ->next = new Node (11);
    head ->next ->next ->next = new Node (14);

    

    printList(head);

    return 0;
}