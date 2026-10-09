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

void inorder(node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// mini maxi dono se kr liya leetcode pe pr sirf maxi ki madat se bhi ho jaege yaha vo try krna
// fir jake check bhi krna leetcode pr ki code sahi challa h na 
node* preorderToBST(vector<int> &pre,int mini,int maxi,int &i){
    if(pre[i]>=maxi || pre[i]<=mini){
        return nullptr;
    }

    node* root = new node(pre[i]);
    i++;

    if(i<pre.size()) root->left = preorderToBST(pre, mini, root->data, i);
    if(i<pre.size()) root->right = preorderToBST(pre, root->data, maxi, i);

    return root;
}


node* preorderToBST2(vector<int> &pre,int val,int &i){
    if(i>=pre.size()){
        return nullptr;
    }

    if(pre[i]>val){
        return nullptr;
    }
    node* root = new node(pre[i]);
    i++;

    root->left = preorderToBST2(pre, root->data,i);
    root->right = preorderToBST2(pre, val,i);

    return root;
}



int main(){

    node* root = nullptr;

    vector<int> pre = {8,5,1,7,10,12};

    int i=0;
    // root = preorderToBST(pre,INT_MIN,INT_MAX,i);

    root = preorderToBST2(pre,INT_MAX,i);

    inorder(root);

    return 0;
}