#include<bits/stdc++.h>
using namespace std;

// Letter Combinations of a Phone Number
// e.g.   in a mobile key pad 2-> abc , 3-> def, 4-> ghi, 5-> jkl, 6-> mno, 7-> pqrs, 8-> tuv, 9-> wxyz
// so for input '34' ans of combinations can be
// [ "dg", "dh", "di", "eg", "eh", "ei", "fg", "fh", "fi"]


void solve(vector<string>& ans,string s,int i,string m[],string t){
    if(i==s.length()){
        ans.push_back(t);
        return;
    }
    int digit = s[i]-'0';

    i++;

    for(int j=0;j<m[digit].length();j++){
        string temp = t+m[digit][j];
        solve(ans,s,i,m,temp);
    }
}

int main(){

    string s;
    cin>>s;

    string m[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector<string> ans;

    solve(ans,s,0,m,"");

    cout<<ans.size()<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}