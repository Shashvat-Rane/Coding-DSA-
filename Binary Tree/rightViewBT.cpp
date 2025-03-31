#include<bits/stdc++.h>
using namespace std;

// Right View of A Binary Tree

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

vector<int> rightViewBT(node* root){
    vector<int> ans;

    if(root == nullptr){
        return ans;
    }

    map<int,int> nodes;

    queue<pair<node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<node*,int> t = q.front();
        q.pop();

        if(nodes.find(t.second) == nodes.end()){
            nodes[t.second] = t.first->data;
        }

        if(t.first->right){
            q.push(make_pair(t.first->right,t.second+1));
        }

        if(t.first->left){
            q.push(make_pair(t.first->left,t.second+1));
        }
    }

    for(auto i : nodes){
        // cout<<i.first<<" "<<i.second<<endl;
        ans.push_back(i.second);
    }

    return ans;
}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    vector<int> ans = rightViewBT(root);

    for(auto i : ans){
        cout<<i<<" ";
    }


    cout<<"\n\n";

    return 0;
}


/*

            1                1 , 5 , 17 , 20
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 1 , 3 , 7 , 9
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/