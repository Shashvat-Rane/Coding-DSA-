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

    int s = 0, e = n-1;
    int mid = s+((e-s)/2);

    while(s<e){
        if (arr[mid]>= arr[0]) {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + ((e-s)/2);
    }

    cout<<"Pivot is: "<<arr[s]<<endl;
    
    return 0;
}