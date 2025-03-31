#include<bits/stdc++.h>
using namespace std;

// Boundary Traversal

class node {
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

void traversalLeft(node* root,vector<int> &ans){
    if(root == nullptr){
        return;
    }
    if(root->left == nullptr && root->right == nullptr){
        return;
    }

    ans.push_back(root->data);

    if(root->left){
        traversalLeft(root->left,ans);
    }
    else{
        traversalLeft(root->right,ans);
    }
}

void traversalLeaf(node* root,vector<int> &ans){
    if(root == nullptr){
        return;
    }

    if(root->left == nullptr && root->right == nullptr){
        ans.push_back(root->data);
        return;
    }

    traversalLeaf(root->left,ans);
    traversalLeaf(root->right,ans);
}

void traversalRight(node* root,vector<int> &ans){
    if(root == nullptr){
        return;
    }

    if(root->left == nullptr && root->right == nullptr){
        return;
    }

    if(root->right){
        traversalRight(root->right,ans);
    }
    else{
        traversalRight(root->left,ans);
    }
    ans.push_back(root->data);
}


int main(){

    node* root = nullptr;

    root = buildTree(root);  // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1

    cout<<"\n\n";

    vector<int> ans;

    traversalLeft(root,ans);
    traversalLeaf(root,ans);
    traversalRight(root,ans);
    ans.pop_back();

    for(auto i : ans){
        cout<<i<<" ";
    }

    cout<<"\n\n";

    return 0;
}


/*

            1                
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


*/