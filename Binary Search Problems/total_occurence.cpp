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

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int left = -1, right = -1;
    int s = 0, e = n-1;

    int mid = s + ((e-s)/2);

    while(s<=e){
        if(arr[mid] == key){
            left = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + ((e-s)/2);
    }

    mid = s + ((e-s)/2);
    s = 0;
    e = n-1;
    while(s<=e){
        if(arr[mid] == key) {
            right = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key) {
            e = mid -1;
        }
        else {
            s = mid + 1;
        }
        mid = s + ((e-s)/2);
    }

    if(left == -1){
        cout<<"No Occurences\n";
    }
    else {
        cout<<"Total number of occurences: "<<((right - left) + 1)<<endl;
    }
    
    return 0;
}