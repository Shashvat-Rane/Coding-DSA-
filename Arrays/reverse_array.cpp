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

    for (int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

    cout<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // using while loop

    int start = 0;
    int end = n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}