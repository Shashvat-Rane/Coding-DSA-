#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }

        int a = 1;
        for(int j=0;j<i;j++){
            cout<<a++<<" ";
        }
        
        for(int j=0;j<i-1;j++){
            cout<<(i-1-j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}