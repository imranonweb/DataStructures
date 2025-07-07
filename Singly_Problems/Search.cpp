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
void Search(Node* &head, int x)
{
    int idx = 0;
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->val == x)
        {
            cout << idx << nl;
            return;
        }
        temp = temp->Next;
        idx++;
    }
    cout << -1 << nl;
}
int main ()
{
    int tc ; cin >> tc; 
    while(tc--)
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
    int x ; cin >> x;
    Search(head,x);
}
    return 0;
}