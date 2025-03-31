#include<bits/stdc++.h>
using namespace std;

// Diagonal Traversal of Binary Tree

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

vector<int> diagonalTraversalBT(node* root){
    vector<int> ans;


    if(root == nullptr){
        return ans;
    }

    map<int,vector<int>> mp;
    queue<pair<node*,int>> q;

    q.push(make_pair(root,0));

    while(!q.empty()){
        node* a = q.front().first;
        int b = q.front().second;

        q.pop();

        mp[b].push_back(a->data);

        if(a->left){
            q.push(make_pair(a->left,b+1));
        }
        if(a->right){
            q.push(make_pair(a->right,b));
        }

    }

    for(auto i : mp){
        for(auto j : i.second){
            ans.push_back(j);
        }
    }

    return ans;
}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    vector<int> ans = diagonalTraversalBT(root);

    for(auto i : ans){
        cout<<i<<" ";
    }


    cout<<"\n\n";

    return 0;
}


/*

            1                1 , 5 , 3 , 11 , 17 , 7 , 10 , 20 , 15 
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 1 , 3 , 7 , 9 , 2 , 5 , 6 , 8 , 4 
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/