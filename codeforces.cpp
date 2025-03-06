#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,p;
        cin>>n>>k>>p;

        k=abs(k);

        if(p*n<k){
            cout<<"-1\n";
            continue;
        }

        if(k%p==0){
            cout<<(k/p)<<endl;
        }
        else{
            cout<<((k/p)+1)<<endl;
        }
    }

    return 0;
}