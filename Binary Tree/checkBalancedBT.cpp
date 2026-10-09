#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=nullptr;
        this->right=nullptr;
    }
};

pair<bool,int> checkBalancedTree(node* root) {
    if(root == nullptr) {
        return make_pair(true,0);
    }

    pair<bool,int> left = checkBalancedTree(root->left);
    pair<bool,int> right = checkBalancedTree(root->right);

    pair<bool,int> ans;

    if(left.first && right.first && abs(left.second - right.second) <= 1) {
        ans.first = true;
        ans.second = max(left.second,right.second) + 1;
    }
    else{
        ans.first = false;
        ans.second = max(left.second,right.second) + 1;
    }
    return ans;
}

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

    node* head = buildTree();

    bool ans = checkBalancedTree(head).first;

    cout<<ans<<endl;

    return 0;
}