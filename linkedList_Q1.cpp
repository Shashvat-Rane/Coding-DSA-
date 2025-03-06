#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data ;
    node* next;

    node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

void print(node* head){

    cout<<endl;
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl<<endl;
}


node* reverseInKgrops(int k,node* head,node* prev){

    if(head == nullptr ){
        return head;
    }

    if(head->next == nullptr ){
        return head;
    }

    node* temp = head->next;
    node* start = head;
    int t = k;
    while(t>0 && head != nullptr){
        head->next = prev;
        prev = head;
        head=temp;
        if(temp!=nullptr){
            temp=temp->next;
        }
        else{
            break;
        }
        // cout<<" fasa ";
        t--;
    }

    if(head==nullptr){
        return prev;
    }

    // cout<<" Infinite call ";

    node* ans = reverseInKgrops(k,head,nullptr);

    // cout<<" yaha ";

    start->next = ans;
    return prev;

}


int main(){

    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    head->next->next->next->next->next->next = new node(70);
    head->next->next->next->next->next->next->next = new node(80);

    print(head);

    head = reverseInKgrops(3,head,nullptr);


    cout<<"Printing\n";
    print(head);

    return 0;
}