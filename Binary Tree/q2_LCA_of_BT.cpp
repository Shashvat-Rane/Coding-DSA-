#include<bits/stdc++.h>
using namespace std;

// Lowest Common Ancestor in a Binary Tree

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

node* lowestCommonAncestor(node* root,int n1,int n2){

    if(root == nullptr){
        return nullptr;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    node* l = lowestCommonAncestor(root->left,n1,n2);
    node* r = lowestCommonAncestor(root->right,n1,n2);

    if(l!=nullptr && r!=nullptr){
        return root;
    }
    else if(l != nullptr && r == nullptr){
        return l;
    }
    else if(l == nullptr && r != nullptr){
        return r;
    }
    else{
        return nullptr;
    }

}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    node* result = lowestCommonAncestor(root,3,15);

    cout<<"LCA = "<<result->data;


    cout<<"\n\n";

    return 0;
}


/*

            1                43
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 20
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/