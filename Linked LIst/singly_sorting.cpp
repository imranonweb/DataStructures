#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
// Selection Sort
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
void Sorting(Node* &head)
{
    for(Node* i = head; i->Next != NULL ; i = i->Next){
        for(Node* j = i->Next ; j !=NULL;j=j->Next){
            if(i->val > j->val)
            swap(i->val,j->val);
        }
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
        insertattail(head,tail,val);
    }
    Sorting(head);
    printlinkedlist(head);
    return 0;
}