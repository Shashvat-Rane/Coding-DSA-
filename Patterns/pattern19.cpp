#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char a = 'A' + n - i;
        for(int j=0;j<i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }

    return 0;
}