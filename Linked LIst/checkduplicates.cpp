#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
bool isdup = false;
class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void checkduplicate(Node* head){
    vector<int> vals;
    Node* temp = head;
    while(temp != NULL){
        vals.push_back(temp->val);
        temp = temp->next;
    }
    sort(vals.begin(),vals.end());
    for(int i = 1;i<vals.size();i++){
        if(vals[i-1]==vals[i]){
        cout << "Yes" << nl;
        return;
        }
    }
    cout << "NO" << nl;
}

int main() {
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c = new Node(6);
    Node* d = new Node(7);
    Node* tail = new Node(2);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;
    checkduplicate(head);
}