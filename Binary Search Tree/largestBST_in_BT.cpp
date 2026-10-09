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
    if(root == nullptr){
        return new node(val);
    }

    if(root->data < val){
        root->right = insertIntoBST(root->right,val);
    }
    else{
        root->left = insertIntoBST(root->left,val);
    }
    return root;
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void takeInput(node* &root){

    int d;
    cin>>d;

    while(d!=-1){
        root = insertIntoBST(root,d);
        cin>>d;
    }
}

class info {
    public:

    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(node* root,int &res){

    if(!root){
        info t;
        t.maxi = INT_MIN;
        t.mini = INT_MAX;
        t.isBST = true;
        t.size = 0;
        return t;
    }


    info ans;

    info left = solve(root->left,res);
    info right = solve(root->right,res);

    ans.maxi = max(root->data,right.maxi);
    ans.mini = min(root->data,left.mini);
    ans.size = left.size + right.size + 1;

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data<right.mini)){
        ans.isBST = true;
    }
    else{
        ans.isBST = false;
    }

    if(ans.isBST){
        res = max(res,ans.size);
    }

    return ans;

}

int main(){

    node* root;

    takeInput(root);

    int res=0;

    info temp = solve(root,res);

    cout<<res;


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