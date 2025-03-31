#include<bits/stdc++.h>
using namespace std;

// Ek question dekh lena Diameter of Binary tree on Leetcode

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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != nullptr){
                q.push(temp->left);
            }
            if(temp->right != nullptr){
                q.push(temp->right);
            }
        }
    }
}

int heightofBT(node* root){
    if(root==nullptr){
        return 0;
    }
    // h++;

    int a = heightofBT(root->left);
    int b = heightofBT(root->right);

    return max(a,b)+1;
}


int main(){

    node* root = nullptr;

    root = buildTree(root);  // input = 1 3 7 -1 -1 11 -1 -1 5 17 20 -1 -1 -1 -1

    cout<<"\n\n";

    levelOrderTraversal(root);

    cout<<"\n\n";
    int h = heightofBT(root);
    cout<<"Height = "<<h<<"\n\n";

    return 0;
}