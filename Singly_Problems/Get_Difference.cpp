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
void printlinkedlist(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << nl;
        temp = temp->Next;
    }
}
void insertAttail(Node* &head, Node* &tail, int val)
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
void Difference (Node* &head)
{
    int getmax = INT_MIN;
    Node* temp = head;
    while(temp!=NULL)
    {
        getmax = max(getmax,temp->val);
        temp = temp->Next;
    }
    Node* temp1 = head;
    int getmin = INT_MAX;
    while(temp1!=NULL)
    {
        getmin = min(getmin,temp1->val);
        temp1 = temp1->Next;
    }
    cout << getmax - getmin << nl;
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
        insertAttail(head,tail,val);
    }
    Difference(head);
    return 0;
}