#include <iostream>
using namespace std;

// Binary Search
// Only works on monotonic functions

int main() {
    
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    int s = 0,e = n-1;
    int mid = s + ((e-s)/2);

    int key;
    cout<<"Enter the key to search: ";
    cin>>key;

    while(s<=e){
        mid = s + ((e-s)/2);
        if(arr[mid] == key){
            cout<<"Found\n";
            return 0;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }
        else {
            s = mid+1;
        }
    }
    cout<<"Not Found\n";
    
    return 0;
}