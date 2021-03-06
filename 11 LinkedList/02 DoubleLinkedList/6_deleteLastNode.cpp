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

Node *deleteLastNode(Node *head)
{
    if (head == NULL){return NULL;}
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;
    while (temp ->next!= NULL)
    {
        temp = temp ->next;
    }
    
    temp->prev->next = NULL;
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

    head = deleteLastNode(head);
    printList(head);
    return 0;
}