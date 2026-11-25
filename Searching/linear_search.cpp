#include <iostream>
using namespace std;

bool linearSearch(vector<int> arr, int key){
    for(int i:arr){
        if(i==key){
            return true;
        }
    }
    return false;
}

int main() {
    
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    cout<<"Enter the value to search in the array\n";
    int key;
    cin>>key;

    bool found = linearSearch(arr,key);

    if(found){
        cout<<"Element is Present\n";
    }
    else{
        cout<<"Element is not Present\n";
    }
    
    return 0;
}