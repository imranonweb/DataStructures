#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node {
    public:
    int val;
    Node* Next;

    Node (int val)
    {
        this->val = val;
        this->Next = NULL;
    }
};
void printlinkedlist(Node* head){
    Node* temp = head->Next;
    cout << head->val;
    while(temp != NULL){
        cout << " -> " << temp->val;
        temp = temp->Next;
    }
    cout << nl;
}
int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = new Node(60);
    head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = d;
    d->Next = tail;

    printlinkedlist(head);

    return 0;
}