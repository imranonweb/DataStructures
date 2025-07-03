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
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->Next;
    }
    cout << nl;
}
void insertathead(Node* &head , int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->Next = head;
    head = newnode;
}
void insertattail(Node* &head , Node* &tail , int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->Next = newnode;
    tail = newnode;
}
void insertatpos(Node* &head,int pos,int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 1;i<(pos-1);i++){ 
        if(temp == NULL){ // Handling the Out of bound Case
            cout << "Out of Bound" << nl; 
            return;
        }
        // On Linked List , the postion u want to insert u have to stop 2 positon before because the current node always point the next node)
        temp = temp->Next; // for wxample , u want to insert at 3 , u have to stop at 1 so that it can point positon 2(main goal)
    }
    newnode->Next = temp->Next;
    temp->Next = newnode;
}
int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(60);
    head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = tail;

    insertathead(head,100);
    printlinkedlist(head);
    insertattail(head,tail,200);
    printlinkedlist(head);
    insertatpos(head,10,1000);
    printlinkedlist(head);

    return 0;
}