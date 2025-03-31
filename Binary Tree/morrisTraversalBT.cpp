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

node* find(node* root){
    node* t = root->left;

    while(t->right != nullptr && t->right != root){
        t = t->right;
    }
    return t;
}

void morrisTraversal(node* root){

    while(root){
        if(root->left){
            node* temp = find(root);

            if(temp->right == nullptr){
                temp->right = root;
                root=root->left;
            }
            else{
                temp->right = nullptr;
                cout<<root->data<<" ";
                root=root->right;
            }
        }
        else{
            cout<<root->data<<" ";
            root = root->right;
        }
    }

}


int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    morrisTraversal(root);

    cout<<"\n\n";

    return 0;
}


/*

            1                15 , 7 , 3 , 10 , 11 , 1 , 20 , 17 , 5
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 4 , 2 , 5 , 1 , 6 , 8 , 3 , 7 , 9
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/