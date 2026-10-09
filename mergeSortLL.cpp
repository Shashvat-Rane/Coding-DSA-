#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = nullptr;
    }
};

void printLL(node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void takeinput(node* &head) {
    int val;
    cin>>val;
    if(val==-1){
        return;
    }
    head = new node(val);
    cin>>val;

    node* temp = head;

    while(val != -1){
        temp->next = new node(val);
        temp = temp->next;
        cin>>val;
    }
}

node* findMid(node* head) {
    node* slow = head;
    node* fast = head->next;

    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node* merge(node* head1, node* head2) {
    if(head1 == nullptr){
        return head2;
    }
    else if(head2 == nullptr){
        return head1;
    }

    node* merged = new node(-1);
    node* temp2 = merged;

    while(head1 != nullptr && head2 != nullptr){
        if(head1->data < head2->data){
            merged->next = new node(head1->data);
            head1 = head1->next;
        }
        else{
            merged->next = new node(head2->data);
            head2 = head2->next;
        }
        merged = merged->next;
    }

    while(head1!=nullptr){
        merged->next = new node(head1->data);
        head1 = head1->next;
        merged = merged->next;
    }
    while(head2!=nullptr){
        merged->next = new node(head2->data);
        head2 = head2->next;
        merged = merged->next;
    }

    return temp2->next;
}

node* mergeSort(node* head) {

    if(head->next == nullptr){
        return head;
    }

    node* head1 = head;
    node* mid = findMid(head);
    node* head2 = mid->next;
    mid->next = nullptr;

    head1 = mergeSort(head1);
    head2 = mergeSort(head2);

    node* merged = merge(head1,head2);

    return merged;
}

int main(){

    node* head = nullptr;

    takeinput(head);

    cout<<"\nBefore: ";
    printLL(head);
    cout<<"\n";

    node* ans = mergeSort(head);

    cout<<"\nAfter: ";
    printLL(ans);
    cout<<"\n";

// q2 flatten a linked list

    return 0;
}