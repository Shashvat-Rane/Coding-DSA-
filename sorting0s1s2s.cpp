#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int l = 0;
    int r = n-1;

    while(l<r){
        if(arr[l]==0){
            l++;
            continue;
        }

        if(arr[r]!=0){
            r--;
            continue;
        }

        swap(arr[l],arr[r]);
    }

    l=0;
    r=n-1;

    while(l<r){
        if(arr[l]!=2){
            l++;
            continue;
        }

        if(arr[r]==2){
            r--;
            continue;
        }

        swap(arr[l],arr[r]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}