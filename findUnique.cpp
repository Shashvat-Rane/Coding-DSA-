#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    cout<<"Unique Element in Array : [ ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<" ] is "<<ans<<endl;

    return 0;
}


// On leetcode : question no. 1207 sinilar to this not same