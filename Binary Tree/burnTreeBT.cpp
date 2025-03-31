#include<bits/stdc++.h>
using namespace std;

// Lowest Common Ancestor in a Binary Tree

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

node* createMap(node* root,map<node*,node*> &mp,int target){
    node* res = nullptr;

    queue<node*> q;
    q.push(root);
    mp[root] = nullptr;

    while(!q.empty()){
        node* front = q.front();
        q.pop();

        if(front->data == target){
            res = front;
        }

        if(front->left){
            q.push(front->left);
            mp[front->left] = front;
        }

        if(front->right){
            q.push(front->right);
            mp[front->right] = front;
        }

    }

    return res;

}

int burningTime(node* root,map<node*,node*> &mp){

    map<node*,bool> burned;
    queue<node*> q;

    q.push(root);
    burned[root] = true;

    int time = 0;

    while(!q.empty()){
        int size = q.size();
        bool flag = false;

        while(size--){
            node* front = q.front();
            q.pop();

            if(front->left && !burned[front->left]){
                q.push(front->left);
                burned[front->left] = true;
                flag = true;
            }
            if(front->right && !burned[front->right]){
                q.push(front->right);
                burned[front->right] = true;
                flag = true;
            }
            if(mp[front] && !burned[mp[front]]){
                q.push(mp[front]);
                burned[mp[front]] = true;
                flag = true;
            }
        }
        if(flag){
            time++;
        }
    }

    return time;
}


int main(){

    node* root = nullptr;

    root = buildTree(root);     // input = 1 3 7 15 -1 -1 -1 11 10 -1 -1 -1 5 17 20 -1 -1 -1 -1
                                // input = 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n\n";

    map<node*,node*> mp;

    node* targetNode = createMap(root,mp,3);

    int time = burningTime(targetNode,mp);

    cout<<time;

    cout<<"\n\n";

    return 0;
}


/*

            1                for 11 - 5 , for 10 - 6
          /   \
         /     \
        3       5
       / \     / 
      7  11   17
     /   /   /
   15   10  20


            1                 for 8 - 5 , for 3 - 3
          /   \
         2     3
        / \   / \
       4   5 6   7
              \   \
               8   9


*/