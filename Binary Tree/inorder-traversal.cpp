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

node* buildTree() {
    int d;
    cin>>d;

    if(d==-1){
        return nullptr;
    }

    node* root = new node(d);

    // cout<<"Enter the data for inserting in Left of "<<d<<endl;
    root->left = buildTree();
    
    // cout<<"Enter the data for inserting in Right of "<<d<<endl;
    root->right = buildTree();

    return root;
}

void inorderTraversal(node* root){
    if(root == nullptr){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int main(){

    node* root = nullptr;

    root = buildTree();

    inorderTraversal(root);

    cout<<endl<<endl;

    deque<node*> q;

    q.push_back(root);

    while(!q.empty()){
        node* front = q.front();

        if(front->left){
            q.push_front(front->left);
        }
        else{
            q.pop_front();
            cout<<front->data<<" ";
            if(front->right)
                q.push_front(front->right);
        }
    }


    return 0;
}

/*      
              1
            /   \
           /     \
          3       5
         / \     / 
        7  11  17
    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */