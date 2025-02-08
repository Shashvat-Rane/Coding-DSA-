#include<bits/stdc++.h>
using namespace std;

// Rat in a Maze Problem


void solve(vector<string>& ans,vector<vector<int>> m,int x,int y,string s){
    // cout<<"1";

    if(x==m.size()-1 && y==m.size()-1 ){
        // cout<<s<<endl;
        ans.push_back(s);
        return;
    }

    m[x][y]=0;

    if(x>0 && m[x-1][y]){
        string t = s+"U";
        solve(ans,m,x-1,y,t);
    }

    if(x<m.size()-1 && m[x+1][y]){
        string t = s+"D";
        solve(ans,m,x+1,y,t);
    }

    if(y>0 && m[x][y-1]){
        string t = s+"L";
        solve(ans,m,x,y-1,t);
    }

    if(y<m.size()-1 && m[x][y+1]){
        string t = s+"R";
        solve(ans,m,x,y+1,t);
    }

}


int main(){

    vector<vector<int>> m = { {1, 0, 0, 0},
                              {1, 1, 1, 1},
                              {1, 1, 0, 1},
                              {0, 1, 1, 1}};

    vector<string> ans;

    solve(ans,m,0,0,"");

    for(int i=0;i<ans.size();i++){
        // cout<<"yaha"<<endl;
        cout<<ans[i]<<endl;
    }    

    return 0;
}