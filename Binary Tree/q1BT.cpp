#include<bits/stdc++.h>
using namespace std;

// Sum of nodes on the longest path from root to leaf node

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

pair<int,int> solve(node* root,pair<int,int> sum){

    sum.first += root->data;

    if(root->left == nullptr && root->right == nullptr){
        return sum;
    }

    pair<int,int> t1;
    pair<int,int> t2;

    if(root->left){
        t1 = solve(root->left,make_pair(sum.first,sum.second+1));
    }

    if(root->right){
        t2 = solve(root->right,make_pair(sum.first,sum.second+1));
    }

    if(t1.second>t2.second){
        return t1;
    }
    else if(t2.second>t1.second){
        return t2;
    }
    else if(t1.first>t2.first){
        return t1;
    }
    return t2;
}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    pair<int,int> ans = solve(root,make_pair(0,0));

    cout<<"Sum = "<<ans.first;


    cout<<"\n\n";

    return 0;
}


/*

            1                43
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 20
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/