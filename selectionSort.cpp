#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int t=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[t]){
                t=j;
            }
        }
        swap(arr[t],arr[i]);
    }

    cout<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}