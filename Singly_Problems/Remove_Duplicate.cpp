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
void insert_at_tail(Node* &head , Node* &tail , int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->Next = newnode;
    tail = newnode;
}
void removeduplicate(Node* &head)
{
    Node* current = head;
    while (current != NULL) {
       Node* now = current;
       Node* nownext = current->Next;
       while(nownext != NULL)
       {
        if(nownext->val == current->val)
        {
            now->Next = nownext->Next;
            delete nownext;
            nownext = now->Next;
        }
        else
        {
            now = nownext;
            nownext = nownext->Next;
        }
       }
        current = current->Next;
    }
}
void printlinkedlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->Next;
    }
    cout << nl;
}
int main ()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        break;
        insert_at_tail(head,tail,val); // because of this function we dont need to manually connect nodes , we already wrote the logic for connection. 
        // because of the constructor call , we dont need to manually indicate NULL, it does it smoothly
    }
    removeduplicate(head);
    printlinkedlist(head);
    return 0;
}