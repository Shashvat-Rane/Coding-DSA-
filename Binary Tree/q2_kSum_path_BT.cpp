#include<bits/stdc++.h>
using namespace std;

// K Sum Paths

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

void kSumPath(node* root,int k,int &count,vector<int> path){
    if(root==nullptr){
        return;
    }

    path.push_back(root->data);

    kSumPath(root->left,k,count,path);
    kSumPath(root->right,k,count,path);

    int sum=0;
    for(int i = path.size()-1;i>=0;i--){
        sum+=path[i];

        if(sum == k){
            count++;
        }
    }
}



int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    int count = 0;
    int k =6;
    vector<int> path;

    kSumPath(root,k,count,path);


    cout<<"LCA = "<<count;


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