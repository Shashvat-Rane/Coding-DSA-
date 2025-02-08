#include<bits/stdc++.h>
using namespace std;

// Subsequences of a String
// "abc" = ["", "a", "b", "c", "ab", "ac", "bc", "abc"]

void subsequences(vector<string>& ans, string t, int i, string s){

    if(i==s.length()){
        ans.push_back(t);
        return;
    }

    subsequences(ans,t,i+1,s);
    t+=s[i];
    subsequences(ans,t,i+1,s);
}


int main(){

    string s;
    cin>>s;

    vector<string> ans;

    subsequences(ans,"",0,s);
    cout<<ans.size()<<endl;

    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


    return 0;
}