#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr = {-2,-3,-8,-7,-1,-2,-3};

    int ans = arr[0];
    int temp = arr[0];

    for(int i=1;i<arr.size();i++){
        
        if(temp<0)
            temp=0;
        temp+=arr[i];
        ans = max(temp,ans);
    }

    cout<<ans;

    return 0;
}