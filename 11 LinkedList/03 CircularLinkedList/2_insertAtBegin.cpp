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
Node *insertBegin(Node *head, int n)
{
    Node *temp = new Node(n);
    if (head == NULL)
    {
        temp->next = temp;
    }
    else{
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}


// Efficient Solution
Node *insert_Begin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int tempData = temp->data;
        temp->data = head->data;
        head->data = tempData;
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

    head = insertBegin(head, 0);
    printList(head);
    
    head = insert_Begin(head, 99);
    printList(head);

    return 0;
}