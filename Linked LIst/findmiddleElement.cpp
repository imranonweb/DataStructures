#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int cnt = 0;
class Node 
{
    public:
    int val;
    Node* Next;
    Node(int val)
    {
        this->val = val;
        this->Next = NULL;
    }
};

void finddup(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->Next;
        cnt++;
    }
    if(cnt%2!=0)
    {
        temp = head;
        for(int i = 1;i <=cnt/2;i++){
            temp = temp->Next;
        }
        cout << temp->val << nl;
    }
    else 
    {
        temp = head;
        for(int i = 1;i <(cnt/2);i++){
            temp = temp->Next;
        }
        cout << temp->val << " " << temp->Next->val << nl;
        
    }
}

int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);
    head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = tail;
    //finddup(head);
    Node* d = new Node(60);
    tail->Next = d;
    finddup(head);

    return 0;
}