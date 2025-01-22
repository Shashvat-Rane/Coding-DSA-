#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        int b;
        cin>>b;

        int c;
        cin>>c;

        long long int sum = a+b+c;

        if(sum==6){
            cout<<"NO\n";
            continue;
        }

        sum-=3;

        if(sum%7==6){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }



    }

    return 0;
}