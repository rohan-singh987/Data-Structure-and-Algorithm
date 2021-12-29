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

Node *deleteFirstNode(Node *head)
{
    if (head == NULL){return NULL;}
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;

}

void printList(Node *head)
{
    cout<<"NULL -> ";
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

    head = deleteFirstNode(head);
    printList(head);
    return 0;
}