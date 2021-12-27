
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

Node *deleteFirst(Node *head)
{
    
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
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

    head = deleteFirst(head);
    printList(head);

    return 0;
}
