#include<iostream>
using namespace std;


// best case me sirf O(n) times chalna chahiye isiliye swapped variable banaya h


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool swapped = true;

    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                swapped = false;
                swap(arr[j],arr[j+1]);
            }
        }

        if(swapped){
            break;
        }
    }
    cout<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}