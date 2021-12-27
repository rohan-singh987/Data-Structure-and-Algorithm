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


Node *insertAtK(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)       
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i < pos-2 && curr != NULL; i++)
    {
         curr = curr->next;
    }
    
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
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

    printList(head);
    cout<<endl;

    head = insertAtK(head, 3, 18);
    printList(head);

    return 0;
}
