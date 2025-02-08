#include<bits/stdc++.h>
using namespace std;

// Finding Power Set of an Array 
// e.g. [1,2,3]  => Power set -> [ [], [1], [2], [3], [1,2], [1,3], [2,3], [1,2,3] ]

void powerSet(vector<vector<int>>& ans, vector<int> temp, vector<int> arr, int i){

    if(i==arr.size()){
        ans.push_back(temp);
        return;
    }

    powerSet(ans,temp,arr,i+1);
    temp.push_back(arr[i]);
    powerSet(ans,temp,arr,i+1);
}


int main(){

    int n ;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    vector<int> temp;

    powerSet(ans,temp,arr,0);

    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Power Set: "<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<"[ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<"]"<<endl;
    }cout<<endl;

    return 0;
}