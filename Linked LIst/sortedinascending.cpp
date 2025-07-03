#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node 
{   
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void issorted(Node* &head)
{
    Node* temp = head;
    vector<int> v;
    while(temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    for(int i = 0; i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
        cout << "NO" << nl;
        return;
        }
    }
    cout << "Yes" << nl;
}
int main()
{
    Node* head = new Node(1);
    Node* a = new Node(5);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* d = new Node(8);
    Node* tail = new Node(10);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;
    issorted(head);
    return 0;
}