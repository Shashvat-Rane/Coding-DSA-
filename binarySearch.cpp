#include<iostream>
using namespace std;

int binarySearch(int n, int key , int arr[]){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;   // not (s+e)/2

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid = s+ (e-s)/2;   // not (s+e)/2
    }
    return -1;
}

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int ans = binarySearch(6,12,even);
    cout<<"Index of 12 is : "<<ans<<endl;

    ans = binarySearch(6,10,even);
    cout<<"Index of 10 is : "<<ans<<endl;

    ans = binarySearch(5,11,odd);
    cout<<"Index of 11 is : "<<ans<<endl;

    ans = binarySearch(5,12,odd);
    cout<<"Index of 12 is : "<<ans<<endl;

    return 0;
}