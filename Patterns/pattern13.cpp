#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char a = 'A';
        for(int j=0;j<n;j++){
            cout<<a<<" ";
            a = a+1;
        }
        cout<<endl;
    }

    return 0;
}