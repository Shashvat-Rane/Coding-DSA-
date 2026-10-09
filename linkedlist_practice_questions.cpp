#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = nullptr;
    }
};

void printLL(node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){

    node* head = new node(1);
    head->next = new node(0);
    head->next->next = new node(2);
    head->next->next->next = new node(1);
    head->next->next->next->next = new node(2);
    head->next->next->next->next->next = new node(0);

    cout<<"Before: ";
    printLL(head);

    cout<<"\n\nAfter: ";
    printLL(head);

    return 0;
}