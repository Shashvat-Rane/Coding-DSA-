#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    int s=0;
    int e=str.length()-1;

    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){

    // char name[20];

    // cin>>name;

    // cout<<"Name : "<<name<<endl;

    string s;
    cin>>s;

    bool ans = checkPalindrome(s);

    if(ans)
        cout<<"Yes\n";
    else    
        cout<<"No\n";

    string t;
    cin>>t;

    sort(t.begin(),t.end());
    cout<<t<<endl;

    return 0;
}