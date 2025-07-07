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
void insertathead(Node* &head, Node* &tail , int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->Next = head;
    head = newnode;
}
void insertattail(Node* &head, Node* &tail , int val)
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
int sizeoflink(Node* &head)
{   int cnt = 0;
    Node* temp = head;
    while(temp!= NULL)
    {
        cnt++;
        temp = temp->Next;
    }
    return cnt;
}
void deleteHead (Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head = head->Next;
}
void deleteTail (Node* &head , Node* &tail)
{
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    Node* temp = head;
    while(temp->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = NULL;
    tail = temp;
}
void deleteatpos(Node* &head, Node* &tail, int idx)
{
    int len = sizeoflink(head);
    if(idx == 0)
    {
        deleteHead(head,tail);
    }
    else if(idx == len-1)
    {
        deleteTail(head,tail);
    }
    else if (idx >= len)
    {
        return;
    }
    else 
    {
    Node* temp = head;
    for(int i = 0; i<idx-1;i++)
    {
        temp = temp->Next;
    }
    temp->Next = temp->Next->Next;
}
}
int main ()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q; cin >> q;
    while(q--)
    {
        int x , v; 
        cin >> x >> v;
        if(x == 0)
        {
            insertathead(head,tail,v);
            printlinkedlist(head);
        }
        else if(x==1)
        {
            insertattail(head,tail,v);
            printlinkedlist(head);
        }
        else 
        {
            deleteatpos(head,tail,v);
            printlinkedlist(head);
        }

    }
    return 0;
}