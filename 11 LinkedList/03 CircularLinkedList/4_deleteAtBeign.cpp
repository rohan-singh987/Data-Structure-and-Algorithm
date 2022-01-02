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

//  Naive Solution
Node *deleteHead(Node *head)
{
    if (head == NULL ){return NULL;}
    if(head->next == NULL)
    {
        return NULL;
    }

        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = head->next;
        delete head;
        return curr->next;
}


// Efficient Solution
Node *deleteHead2(Node *head)
{
    if (head == NULL ){return NULL;}
    if(head->next == NULL)
    {
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;

    delete temp;
    return head;
    
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

    head = deleteHead(head);
    printList(head);
    
    head = deleteHead2(head);
    printList(head);
    
    return 0;
}