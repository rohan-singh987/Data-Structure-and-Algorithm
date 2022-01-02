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



Node *deleteKth(Node *head, int k)
{
    if (head == NULL ){return NULL;}
    if(head->next == NULL)
    {
        return NULL;
    }
    if (k == 1)
    {
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;

    delete temp;
    return head;
    }

    Node *curr = head;
    for (int i = 0; i < k-2; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;

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
    head ->next ->next ->next ->next = new Node(55);
    head ->next ->next ->next ->next ->next = new Node(66);
    head ->next ->next ->next ->next ->next ->next = head;

    printList(head);


    head = deleteKth(head, 5);
    printList(head);
    
    return 0;
}