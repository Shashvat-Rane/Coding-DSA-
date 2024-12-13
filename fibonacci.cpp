#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<"0 ";
    }
    else{
        cout<<"0 1 ";
    }

    int a = 0;
    int b = 1;

    n=n-2;

    while(n>0){
        int c= a+b;
        cout<<c<<" ";

        a=b;
        b=c;
        n--;
    }

    return 0;
}