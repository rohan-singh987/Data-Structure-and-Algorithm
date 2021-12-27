

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


Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    
    while (head->next != NULL)
    {
        head = head->next;
    }
    head ->next = temp;
    return head;
}


void printList(Node *head)
{
    while(head != NULL)
    {
        cout<< (head ->data) <<" ";
        head = head->next;
    }
}


int main(){

    Node *head = new Node(1);
    head ->next = new Node(2);
    head ->next ->next = new Node(3);

    printList(head);

    head = insertEnd(head, 4);
    head = insertEnd(head, 5);

    printList(head);

    return 0;
}