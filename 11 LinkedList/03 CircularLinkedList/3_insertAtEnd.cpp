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


Node *insertEnd(Node *head, int n)
{
    Node *temp = new Node(n);
    if (head == NULL)
    {
        temp->next = temp;
        return temp; 
    }
    else{
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next; 
        }
            curr->next = temp;
            temp->next = head;
        return head;
    }
}


void printList(Node *head)
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

    head = insertEnd(head, 55);
    printList(head);
    
    return 0;
}