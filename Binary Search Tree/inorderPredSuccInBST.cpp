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

node* insertIntoBST(node* root,int d){

    if(root == nullptr){
        root = new node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }

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

node* rightMost(node* root){
    while(root->right){
        root = root->right;
    }
    return root;
}

node* leftMost(node* root){
    while(root->left){
        root = root->left;
    }
    return root;
}

void inorderPredecessorSuccessor(node* root,node* &pred,node* &succ,int key){

    while(root){
        if(key > root->data){
            pred = root;
            root = root->right;
        }
        else if(key < root->data){
            succ = root;
            root = root->left;
        }
        else{
            if(root->left){
                pred = rightMost(root->left);
            }

            if(root->right){
                succ = leftMost(root->right);
            }
            break;
        }
    }
}


int main(){

    node* root = nullptr;

    takeInput(root);   // 10 7 12 9 6 3 50 -1
    cout<<"\n";

    inorder(root);

    cout<<"\n\n";

    node* pred = nullptr;
    node* succ = nullptr;

    inorderPredecessorSuccessor(root,pred,succ,11);

    cout<<"Predecessor: "<<pred->data<<"\n";
    cout<<"Successor: "<<succ->data<<"\n";

    cout<<"\n\n";

    return 0;
}