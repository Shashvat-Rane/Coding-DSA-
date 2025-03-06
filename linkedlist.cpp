#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int d){
        this->val = d;
        this->next= NULL;
    }
};

void print(node* head){

    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }cout<<endl<<endl;
}

void reverseLL(node* &head){

    node* prev = nullptr;
    while(head!=nullptr){
        node* aageka = head->next;
        head->next = prev;

        prev = head;
        head = aageka;
    }

    head = prev;
}

int main(){

    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    print(head);
    reverseLL(head);
    print(head);


    return 0;
}