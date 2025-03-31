#include<bits/stdc++.h>
using namespace std;

// Vertical Traversal

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

vector<vector<int>> verticalTraversal(node* root){

    map<int,vector<int>> nodes;      // horizontal distance , nodes at that distance
    queue<pair<node*,int>> q;        // node , horizontal distance of current node

    vector<vector<int>> ans;
    vector<int> temp;

    if(root==nullptr){
        return ans;
    }

    q.push(make_pair(root,0));

    while(!q.empty()){

        pair<node*,int> t = q.front();
        node* frontNode = t.first;
        int hd = t.second;
        q.pop();

        nodes[hd].push_back(frontNode->data);

        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }

        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }

    for(auto i : nodes){
        for(auto j : i.second){
            temp.push_back(j);
        }
        ans.push_back(temp);
        temp.clear();
    }

    return ans;

}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    vector<vector<int>> ans = verticalTraversal(root);

    for(auto i : ans){
        for(auto j : i)
            cout<<j<<" ";
    }


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


            1                            4 , 2 , 1 , 5 , 6 , 3 , 8 , 7 , 9
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/