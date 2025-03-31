#include<bits/stdc++.h>
using namespace std;

// Q - It is a Sum Tree if root node's value is equal to sum of all values from left and right subtree for each node

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

pair<bool,int> sumTree(node* root){
    if(root == nullptr){
        pair<bool,int> t = make_pair(true,0);
        return t;
    }
    
    if(root->left  == nullptr && root->right == nullptr){
        pair<bool,int> t = make_pair(true,root->data);
        return t;
    }
    
    pair<bool,int> l = sumTree(root->left);
    pair<bool,int> r = sumTree(root->right);
    
    bool temp = root->data == (l.second + r.second);
    
    pair<bool,int> ans;
    
    if(l.first && r.first && temp){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    ans.second = (root->data + l.second + r.second);
    return ans;
}

int main(){

    node* root = nullptr;

    root = buildTree(root);

    if(sumTree(root).first){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}