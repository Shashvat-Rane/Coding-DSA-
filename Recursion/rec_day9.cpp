#include<bits/stdc++.h>
using namespace std;

// Permutation of an array or string
// "abc" -> ["abc", "acb", "bca", "bac", "cba", "cab"]

void solve(vector<string>& ans, string s, int i){

    if(i==s.length()){
        ans.push_back(s);
        return;
    }

    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        solve(ans,s,i+1);
        swap(s[i],s[j]);
    }

}

int main(){

    string s;
    cin>>s;
    vector<string> ans;

    solve(ans,s,0);


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}