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

    int s=0,mid=0,e=n-1;

    while(mid<e){
        if(arr[mid] == 0){
            swap(arr[s++],arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid++],arr[e--]);
        }
    }

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}