// Time Complexity : O(1)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};


Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp ->next = head;
    return temp;
}


void printList(Node *head)
{
    while(head != NULL)
    {
        cout<< (head ->data) <<" ";
        head = head ->next;
    }
}


int main()
{
    Node *head = new Node(21);
    head ->next = new Node(22);
    head ->next ->next = new Node(23);

    head = insertBegin(head, 10);
    head = insertBegin(head, 9);
    head = insertBegin(head, 8);

    printList(head);

    return 0;
}