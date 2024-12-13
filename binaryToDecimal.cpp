#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    int ans=0;
    int count=0;

    while(n>0){
        int t = n%10;
        ans+= pow(2,count)*t;
        n=n/10;
        count++;
    }

    cout<<ans;

    return 0;
}