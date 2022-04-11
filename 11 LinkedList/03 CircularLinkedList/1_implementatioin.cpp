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

void printList(Node *head)
{
    if(head == NULL){return;}
    cout<<head->data<<" -> ";
    for (Node *i = head->next; i != head; i = i->next)
    {
        cout<<i->data<<" -> ";
    }
    cout<<"head"<<endl;
}

void print__list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *curr = head;
    do
    {
        cout<<curr->data<<" -> ";
        curr = curr->next;
    } while (curr != head);
    cout<<"head"<<endl;
}

int main()
{
    Node *head = new Node(11);
    head ->next = new Node(22);
    head ->next ->next = new Node(33);
    head ->next ->next ->next = new Node(44);
    head ->next ->next ->next ->next = head;

    printList(head);
    print__list(head);
    
    return 0;
}