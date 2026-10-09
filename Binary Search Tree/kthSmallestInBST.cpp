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

node* insertIntoBST(node* root,int val){
    if(!root) return new node(val);

    if(root->data<val){
        root->right=insertIntoBST(root->right,val);
    }
    else{
        root->left = insertIntoBST(root->left,val);
    }
    return root;
}

void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



void takeInput(node* &root){
    int d;
    cin>>d;

    while(d>=0){
        root = insertIntoBST(root,d);
        cin>>d;
    }
}

int kthSmallestInBST(node* root,int &i,int k){
    if(root == nullptr){
        return -1;
    }

    int l = kthSmallestInBST(root->left,i,k);

    if(l!=-1){
        return l;
    }

    i++;
    if(i==k){
        return root->data;
    }

    return kthSmallestInBST(root->right,i,k);

}


int main(){

    node* root = nullptr;

    takeInput(root);   // 15 5 10 8 20 6 19 1 0 -1

    cout<<"\n";
    inorder(root);
    cout<<"\n\n";

    int i=0;
    cout<<kthSmallestInBST(root,i,4)<<"\n\n";

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