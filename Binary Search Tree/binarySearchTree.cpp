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

bool searchInBST(node* root){
    int d = 3;
    // cin>>d;

    while(root){
        if(root->data == d){
            return true;
        }

        if(d > root->data)
            root=root->right;
        else
            root = root->left;

    }
}

int main(){

    node* root = nullptr;

    takeInput(root);   // 10 7 12 9 6 3 50 -1
    cout<<"\n";

    inorder(root);

    cout<<"\n\n";

    if(searchInBST(root)){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }

    cout<<"\n\n";

    return 0;
}