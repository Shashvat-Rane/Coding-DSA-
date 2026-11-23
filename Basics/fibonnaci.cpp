#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" ";
    while (b<=n){
        cout<<b<<" ";
        int t = a;
        a = b;
        b = t + b;
    }

    return 0;
}