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
        next = NULL;
        prev = NULL;
    }
};

Node *insertAtBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
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

    Node *head = new Node(15);
    Node *temp1 = new Node(25);
    Node *temp2 = new Node(35);
    Node *temp3 = new Node(45);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev= temp1;
    temp2 ->next = temp3;
    temp3 ->prev = temp2;

    printList(head);

    head = insertAtBegin(head, 5);
    printList(head);
    
    return 0;
}