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


Node *deleteLast(Node *head)
{
    if(head == NULL){return NULL;}
    if (head ->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;
    while (curr ->next ->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
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
    head ->next ->next ->next = new Node(4);

    head = deleteLast(head);
    printList(head);

    return 0;
}
