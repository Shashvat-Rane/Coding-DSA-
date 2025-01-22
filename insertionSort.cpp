#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int temp = arr[i];
        if(arr[i]>=arr[i-1]){
            continue;
        }

        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<endl;

    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}