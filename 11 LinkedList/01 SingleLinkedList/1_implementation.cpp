#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)            // Self calling function (constructor)
    {
        data = x;
        next = NULL;
    }
};

//  Iterative Tranversing LinkedList
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout<< (curr ->data) <<" -> ";
        curr = curr ->next;
    }
    cout<<"NULL"<<endl;
}

//  Recursive Transversing LinkedList
void print__list(Node *head)
{
    Node *curr = head;
    if(curr == NULL)
    {
        return;
    }
    else{
        cout<< (curr ->data)<<" -> ";
        print__list(curr ->next);
    }
}



int main(){

    Node *head = new Node(12);
    head ->next = new Node(7);
    head ->next ->next = new Node(33);
    head ->next ->next ->next = new Node(2);

    printList(head);
    print__list(head);


    return 0;
}