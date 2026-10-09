#include<bits/stdc++.h>
using namespace std;

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

node* buildTree() {
    int d;
    cin>>d;

    if(d==-1){
        return nullptr;
    }

    node* root = new node(d);

    // cout<<"Enter the data for inserting in Left of "<<d<<endl;
    root->left = buildTree();
    
    // cout<<"Enter the data for inserting in Right of "<<d<<endl;
    root->right = buildTree();

    return root;
}

void postorderTraversal(node* root){
    if(root == nullptr){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

    node* root = nullptr;

    root = buildTree();

    postorderTraversal(root);

    return 0;
}

/*      
              1
            /   \
           /     \
          3       5
         / \     / 
        7  11  17
    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */