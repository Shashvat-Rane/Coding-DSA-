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
        return new node(d);
    }

    if(d>root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
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

bool validateBST(node* root,int mini,int maxi){
    if(root == nullptr){
        return true;
    }

    if(root->data>=mini && root->data<=maxi){
        bool l = validateBST(root->left,mini,root->data);
        bool r = validateBST(root->right,root->data,maxi);
        return l && r;
    }
    else
        return false;
}

int main(){

    node* root = nullptr;

    takeInput(root);  // 15 5 10 8 20 6 19 1 0 -1

    root->left->data = 18;

    cout<<"\n";

    inorder(root);

    bool ans = validateBST(root,INT_MIN,INT_MAX);
    cout<<"\n";

    if(ans)cout<<"YES\n";
    else cout<<"NO\n";



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