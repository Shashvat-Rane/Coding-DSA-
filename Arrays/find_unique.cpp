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

    int ans =0;

    for(int i:arr){
        ans=ans^i;
    }

    cout<<ans<<endl;
    
    return 0;
}