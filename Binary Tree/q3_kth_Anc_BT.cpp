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

pair<node*,int> kthAncestor(node* root,int k,int val){
    if(root == nullptr){
        return make_pair(nullptr,k);
    }

    if(root->data == val){
        return make_pair(root,k);
    }

    pair<node*,int> l = kthAncestor(root->left,k,val);
    pair<node*,int> r = kthAncestor(root->right,k,val);
    
    if(l.first == nullptr && r.first == nullptr){
        return make_pair(nullptr,k);
    }


    if(l.first != nullptr){
        if(l.second != 0){
            l.second--;
            l.first = root;
        }
        return l;
    }

    if(r.second != 0){
        r.second--;
        r.first = root;
    }
    return r;
}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    pair<node*,int> result = kthAncestor(root,3,10);

    cout<<result.first->data;


    cout<<"\n\n";

    return 0;
}


/*

            1                
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/