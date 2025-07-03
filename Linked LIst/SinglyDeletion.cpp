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
void deleteHead(Node* &head)
{
    Node* temp = head;
    head = head->Next;
    delete temp;

}
void deleteAtPos(Node* &head , int idx)
{
    Node* temp = head;
    for(int i = 1; i<idx-1;i++)
    {
        temp = temp->Next; // always pointing the next node
    }
    Node* deletenode = temp->Next;
    temp->Next = temp->Next->Next;
    delete deletenode;
}
void deleteTail(Node* &head,Node* &tail)
{
    Node* temp = head;
while(temp->Next->Next != NULL)
{
    temp = temp->Next;
}
temp->Next = NULL;
tail = temp;
}
void printlinkedlist(Node* head)
{
    Node* temp = head;
    cout << "Linked List Elements are : " << nl;
    while(temp != NULL)
    {
        cout <<  temp->val << nl;
        temp = temp->Next;
    }
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
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    // deleteHead(head);
    // printlinkedlist(head);
    // deleteAtPos(head,4);
    // printlinkedlist(head);
    deleteTail(head,tail);
    printlinkedlist(head);
    return 0;
}