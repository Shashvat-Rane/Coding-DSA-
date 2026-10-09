#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=nullptr;
        this->right=nullptr;
    }
};

node* insertIntoBST(node* root,int d){
    if(root == nullptr){
        return new node(d);
    }

    if(root->data > d){
        root->left = insertIntoBST(root->left,d);
    }
    else{
        root->right = insertIntoBST(root->right,d);
    }
    return root;
}

void takeInput(node* &root){
    int d;
    cin>>d;

    while(d>=0){
        root = insertIntoBST(root,d);
        cin>>d;
    }
}

void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int find(node* root){

    while(root->right){
        root=root->right;
    }
    return root->data;
}

node* deleteFromBST(node* root,int k){
    if(root == nullptr){
        return nullptr;
    }

    if(root->data == k){
        // logic to delete
        if(!root->left && !root->right){
            delete root;
            return nullptr;
        }
        else if(!root->left && root->right){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left && !root->right){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            int val = find(root->left);
            root->data = val;
            root->left = deleteFromBST(root->left,val);
        }
    }
    else if(k>root->data){
        root->right = deleteFromBST(root->right,k);
        return root;
    }
    else{
        root->left = deleteFromBST(root->left,k);
        return root;
    }
}

int main(){

    node* root = nullptr;

    takeInput(root);  // 15 5 10 8 20 6 19 1 0 -1

    cout<<"\n\n";
    inorder(root);
    cout<<"\n\n";

    cout<<"Enter value of node to delete: ";
    int k;
    cin>>k;

    cout<<"\n\n";

    root = deleteFromBST(root,k);

    inorder(root);
    cout<<"\n\n";

    return 0;
}

/*

15 5 10 8 20 6 19 1 0 -1

              15
             /  \ 
            /    \
          5       20
         / \     /
        1   10  19
       /   /
      0   8
         /
        6



*/