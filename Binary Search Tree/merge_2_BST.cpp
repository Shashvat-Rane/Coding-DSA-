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
    if(root == nullptr)
        return new node(val);

    if(root->data<val){
        root->right = insertIntoBST(root->right,val);
    }
    else{
        root->left = insertIntoBST(root->left,val);
    }
    return root;
}

void takeInput(node* &root){
    int d;
    cin>>d;

    while(d!=-1){
        root = insertIntoBST(root,d);
        cin>>d;
    }
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* convertToSortedDLL(node* root){

}

int main(){

    node* root1 = nullptr;
    node* root2 = nullptr;

    takeInput(root1);
    takeInput(root2);

    cout<<"Before: \n";
    inorder(root1);
    cout<<"\n";
    inorder(root2);
    cout<<"\n";

    root1 = convertToSortedDLL(root1);
    root2 = convertToSortedDLL(root2);

    node* root = nullptr;

    cout<<"After: \n";
    inorder(root);

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

10 7 12 9 6 3 50 -1

            10
          7   12
         6 9


*/