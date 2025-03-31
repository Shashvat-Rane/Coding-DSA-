#include<bits/stdc++.h>
using namespace std;

// Q - Check if two binary trees are identical or not

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildTree(node* root) {
    int d;
    cin>>d;

    if(d==-1){
        return nullptr;
    }

    root = new node(d);

    // cout<<"Enter the data for inserting in Left of "<<d<<endl;
    root->left = buildTree(root->left);
    
    // cout<<"Enter the data for inserting in Right of "<<d<<endl;
    root->right = buildTree(root->right);
}

bool idencticalBT(node* r1,node* r2){
    if(r1==nullptr && r2==nullptr){
        return true;
    }

    if(r1!=nullptr && r2==nullptr){
        return false;
    }

    if(r1==nullptr && r2!=nullptr){
        return false;
    }

    if(r1->data != r2->data){
        return false;
    }

    bool ans1 = idencticalBT(r1->left,r2->left);
    bool ans2 = idencticalBT(r1->right,r2->right);

    if(ans1 && ans2){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    node* r1 = nullptr;
    node* r2 = nullptr;

    r1 = buildTree(r1);
    r2 = buildTree(r2);

    if(idencticalBT(r1,r2)){
        cout<<"Yes - Identical\n";
    }
    else{
        cout<<"No - Not Identical\n";
    }

    return 0;
}