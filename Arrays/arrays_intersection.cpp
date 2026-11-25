#include <iostream>
using namespace std;

// Both arrays are sorted

int main() {
    
    cout<<"Enter the size of Array 1: ";
    int n;
    cin>>n;
    vector<int> arr1;

    cout<<"\nEnter the values: ";
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr1.push_back(t);
    }

    cout<<"\nEnter the size of Array 2: ";
    int m;
    cin>>m;
    vector<int> arr2;

    cout<<"\nEnter the values: ";
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        arr2.push_back(t);
    }

    vector<int> ans;

    int i=0,j=0;

    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
    }

    cout<<endl;

    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}