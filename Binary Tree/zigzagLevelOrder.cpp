#include<bits/stdc++.h>
using namespace std;

// zigzag level order traversal

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

vector<vector<int>> zigzagLevelOrderTraversal(node* root){

    vector<vector<int>> ans;

    if(root == nullptr){
        return ans;
    }

    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    vector<int> temp;
    bool ltor = true;

    while(!q.empty()){
        node* t = q.front();
        q.pop();
        if(t==nullptr){
            if(ltor){
                ans.push_back(temp);
                temp.clear();
            }
            else{
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                temp.clear();
            }
            ltor = !ltor;
            if(!q.empty()){
                q.push(nullptr);
            }
            continue;
        }

        temp.push_back(t->data);

        if(t->left){
            q.push(t->left);
        }
        if(t->right){
            q.push(t->right);
        }
    }
    return ans;
}


int main(){

    node* root = nullptr;

    root = buildTree(root);  // input = 1 3 7 15 -1 -1 -1 11 -1 -1 5 17 20 -1 -1 -1 -1

    cout<<"\n\n";

    vector<vector<int>> ans = zigzagLevelOrderTraversal(root);

    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
    }

    cout<<"\n\n";

    return 0;
}


/*

            1                 1 , 5 , 3 , 7 , 11 , 17 , 20 , 15
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /       /
   15       20


*/