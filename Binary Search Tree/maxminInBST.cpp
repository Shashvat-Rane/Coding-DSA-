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

int minValue(node* root){
    if(root->left){
        return minValue(root->left);
    }
    else{
        return root->data;
    }
}

int maxValue(node* root){
    if(root->right){
        return maxValue(root->right);
    }
    else{
        return root->data;
    }
}

int main(){

    node* root = nullptr;

    takeInput(root);   // 10 7 12 9 6 3 50 -1
    cout<<"\n";

    inorder(root);

    cout<<"\n\n";

    cout<<"Minimum Value: "<<minValue(root)<<"\n";
    cout<<"Maximum Value: "<<maxValue(root)<<"\n";

    cout<<"\n\n";

    return 0;
}