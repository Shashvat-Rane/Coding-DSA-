#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];  // arr[i] will be from range [0,n-1] 
    }

    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i]^i;
    }
    cout<<"Duplicate element in Array is "<<ans<<endl;


    return 0;
}

// leetcode question similar to this problem : 442