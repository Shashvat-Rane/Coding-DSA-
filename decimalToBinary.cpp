#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int ans=0;
    int count=1;

    while(n>0){
        int t = n%2;
        ans+=t*count;
        n=n/2;
        count=count*10;
    }
    
    cout<<ans;


    return 0;
}