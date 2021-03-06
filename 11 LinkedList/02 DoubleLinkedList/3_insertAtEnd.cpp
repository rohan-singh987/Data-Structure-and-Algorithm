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


Node *insertAtEnd(Node *head, int data)
{
    Node *temp = new Node(data);

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;

    return head;
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

    head = insertAtEnd(head, 55);
    printList(head);

    return 0;
}