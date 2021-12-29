#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int x)
    {
        data = x;
        next = prev = NULL;
    }
};

Node *reverseList(Node *head)
{
    if(head == NULL || head->next == NULL){return head;}
    Node *previos = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        previos = curr->prev;
        curr->prev = curr->next;
        curr->next = previos;

        curr = curr->prev;
    }
    return previos->prev;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }   
    cout<<"NULL"<<endl;
}

int main(){

    Node *head = new Node(22);
    Node *temp1 = new Node(99);
    Node *temp2 = new Node(44);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev= temp1;

    printList(head);
    
    head = reverseList(head);
    printList(head);

    return 0;
}