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

    for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}