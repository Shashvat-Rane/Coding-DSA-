#include<bits/stdc++.h>
using namespace std;


int main(){

    map<int,int> mp;

    mp[10]=100;
    mp[20]=200;
    mp[30]=300;
    mp[40]=400;

    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }




    return 0;
}






/*


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    
	    if(a.length()<b.length()){
	        cout<<"-1\n";
	        continue;
	    }
	    else if(a.length()==b.length()){
	        if(a==b){
	            cout<<"0\n";
	        }
	        else{
	            cout<<"-1\n";
	        }
	        continue;
	    }
	    else if(b.length()==1){
	        int n = a.find(b[0]);
	        if(n==-1){
	            cout<<"-1\n";
	            continue;
	        }
	    }
	    
	    int i=0,j=0;
	    
	    bool ch = true;
	    
	    while(i>=0 && i<a.length() && j<b.length()){
	        string tt = a.substr(i);
	        int n = tt.find(b[j++]);
	        
	        if(n==-1){
	            ch=false;
	            break;
	        }
	        i=n+1;
	    }
	    
	    if(j<b.length()){
	        ch=false;
	    }
	    
	    if(ch==false){
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    int ans=0;
	    
	    i=a.length()-1;
	    j=b.length()-1;
	    
	    while(i>=0 && j>=0){
	        if(b[j]==a[i]){
	            a[i]='0';
	            i--;
	            j--;
	            
	        }
	        else{
	            i--;
	        }
	    }
	    
	    int kk = a.length()-b.length();
	    
	    int ss = 1;
	    
	    for(i=0;i<a.length();i++){
	        if(kk==0){
	            break;
	        }
	        
	        if(a[i]!='0'){
	            ans+=ss;
	            kk--;
	        }
	        else{
	            ss++;
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}

}






*/







/*




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int q;
	    cin>>q;
	    
	    
	    
	    
	    
	    while(q--){
	        int p,x;
	        cin>>p>>x;
	        
	        arr[p-1]=x;
	        
	        
	        int ans = arr[0];
	        
	        for(int i=1;i<n;i++){
    	        if(i%2==0){
    	            ans=ans|arr[i];
    	        }
    	        else{
    	            ans=ans&arr[i];
    	        }
	        }
	        
	        cout<<ans<<endl;
	    }
	}
return 0;
}




*/