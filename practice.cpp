#include<iostream>
using namespace std;


int main(){

    string s;
    cin>>s;

    string t;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<'z'){
            t+=s[i]-'a'+'A';
        }
        else{
            cout<<t<<endl;
            t="";
            t+=s[i]-'A'+'a';
        }
    }

    cout<<t<<endl;

    return 0;
}