#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    int i=0,j=n-1;

    while(i<j){
        if(arr[i] ==1 && arr[j] ==0){
            swap(arr[i],arr[j]);
        }

        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
    }

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}