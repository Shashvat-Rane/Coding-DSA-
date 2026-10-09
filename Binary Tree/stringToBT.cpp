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

void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* constructBT(int &i,string s){
    if(s[i] == ')'){
        return nullptr;
    }

    int d=0;
    while(s[i]!='(' && s[i]!=')'){
        d=d*10+(s[i]-'0');
        i++;
    }

    node* root = new node(d);

    if(i<s.length() && s[i]=='('){
        i++;
        root->left = constructBT(i,s);
        i++;
    }
    if(i<s.length() && s[i]=='('){
        i++;
        root->right = constructBT(i,s);
        i++;
    }

    return root;

}


int main(){

    string s;
    cin>>s;

    node* root = nullptr;
    int i = 0;
    root = constructBT(i,s);

    inorder(root);



    return 0;
}