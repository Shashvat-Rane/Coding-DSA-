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

node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return nullptr;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

// Diameter of bt means number of nodes on the longest path between two end notes.

pair<int,int> diameterOfBT(node* root){

    if(root == nullptr){
        return make_pair(0,0);
    }

    pair<int,int> left = diameterOfBT(root->left);
    pair<int,int> right = diameterOfBT(root->right);

    pair<int,int> ans;
    ans.first = max(left.first,right.first);
    ans.first = max(ans.first,(left.second + right.second + 1));
    ans.second = max(left.second,right.second) + 1;

    return ans;
}

int main(){

    /*      
              1
            /   \
           /     \
          3       5
         / \     / 
        7  11  17
    
     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */

    node* root = nullptr;

    root = buildTree();

    pair<int,int> ans;

    ans = diameterOfBT(root);

    cout<<ans.first<<endl;

    return 0;
}