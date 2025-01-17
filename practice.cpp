#include<iostream>
using namespace std;


int main(){

    int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    cout<<s<<endl;
	    string temp="";
	    
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            temp+='1';
	        }
	        else{
	            temp+='0';
	        }
	    }
	   // cout<<temp<<endl;
	}

    return 0;
}