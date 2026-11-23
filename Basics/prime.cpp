#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    bool ans = true;

    for(int i=2;i<n;i++){
        if(n%i==0){
            ans = false;
            break;
        }
    }

    if(ans)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;

    return 0;
}