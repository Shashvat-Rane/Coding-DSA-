#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array before Alternate Swap: ";
    print(arr,n);
    cout<<endl;

    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }

    cout<<"Array after Alternate Swap: ";
    print(arr,n);
    cout<<endl;



    return 0;
}