#include<bits/stdc++.h>
using namespace std;

// Ek question dekh lena Diameter of Binary tree on Leetcode

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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != nullptr){
                q.push(temp->left);
            }
            if(temp->right != nullptr){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    stack<node*> st;
    st.push(root);
    st.push(nullptr);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp == nullptr){
            if(!q.empty()){
                q.push(nullptr);
                st.push(nullptr);
            }
        }
        else{
            // cout<<temp->data<<" ";
            // st.push(temp);
            if(temp->right != nullptr){
                st.push(temp->right);
                q.push(temp->right);
            }
            if(temp->left != nullptr){
                st.push(temp->left);
                q.push(temp->left);
            }
        }
    }

    while(!st.empty()){
        node* t = st.top();
        st.pop();
        if(t==nullptr){
            cout<<endl;
        }
        else{
            cout<<t->data<<" ";
        }
    }
}

int main(){

    node* root = nullptr;

    /*      
              1
            /   \
           /     \
          3       5
         / \     / 
        7  11  17
    */

    root = buildTree(root); // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrderTraversal(root);
    // reverseLevelOrderTraversal(root);

    return 0;
}



/*

Shashvat Rane
shashvatrane24@gmail.com
2024 - CSE
Ready to relocate to Indore - Yes
Immediate joining within 15 days - Yes
Current Location - Mysore


*/