#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
//int cnt = 0;
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
void checksame(Node* &head, Node* &head1)
{
    Node* temp = head;
    Node* temp1 = head1;
    int size1 = sizeoflink(head);
    int size2 = sizeoflink(head1);
if(size1 != size2)
{
    cout << "NO" << nl;
    return;
}
    while(temp!= NULL && temp1 != NULL)
    {
        if(temp->val != temp1->val)
        {
            cout << "NO" << nl;
            return;
        }
        temp = temp->Next;
        temp1 = temp1->Next;
    }
    cout << "YES" << nl;
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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val1;
    while(true)
    {
        cin >> val1;
        if(val1 == -1)
        break;
        insertAttail(head1,tail1,val1);
    }
    checksame(head,head1);
    return 0;
}