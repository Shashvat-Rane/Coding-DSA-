#include<iostream>
using namespace std;

int getMax(int arr[],int n){

    int t = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>t){
            t=arr[i];
        }
    }
    return t;
}
int getMin(int arr[],int n){

    int t = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<t){
            t=arr[i];
        }
    }
    return t;
}


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum in Array : "<<getMax(arr,n)<<endl;
    cout<<"Maximum in Array : "<<getMin(arr,n)<<endl;

    return 0;
}