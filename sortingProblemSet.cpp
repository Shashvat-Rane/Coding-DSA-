#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void question1(){  // Reverse the array
    int n;
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"Array Before Reverse : ";
    for(int i : arr){
        cout<<i<<" ";
    }cout<<endl;

    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    cout<<"Array After Reverse : ";
    for(int i : arr){
        cout<<i<<" ";
    }cout<<endl;


}


void question2(){   // merge sorted array
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;

    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int a=0,b=0;

    vector<int> ans;

    while(a<n && b<m){
        if(arr1[a]>arr2[b]){
            ans.push_back(arr2[b++]);
        }
        else{
            ans.push_back(arr1[a++]);
        }
    }

    while(a<n){
        ans.push_back(arr1[a++]);
    }
    while (b<m){
        ans.push_back(arr2[b++]);
    }

    cout<<"Merge Sorted Array : ";

    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
}


void question3(){  //  move zeroes to the right

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[s++]);
        }
    }

    cout<<"\nAfter: ";
    for(int i : arr){
        cout<<i<<" ";
    }cout<<endl;

}


void question4(){  // rotating an array by k values , imp h waise easy h ek dusri array use krke O(n) time me ho jaega
                   // par usme space bhi O(n) ho jaega , isme O(n) time and O(1) space me ho gaya h which was the requiremenet 

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    reverse(arr.begin(),arr.end());

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());

    cout<<"\nAfter : ";
    for(int i: arr){
        cout<<i<<" ";
    }
}


void question5(){  // check if array is sorted and rotated or not ( same logic of above rotate array question )

    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int k=0;

    bool check = true;

    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            check = false;
            k=i+1;
            break;
        }
    }

    if(check){
        cout<<"\nYes, Array is Sorted and rotated by 0\n";
        return;
    }

    k=n-k;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

    check = true;

    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            check=false;
            break;
        }
    }
    
    if(check){
        cout<<"\nYes, Array is Sorted and rotated by "<<k<<endl;
    }
    else{
        cout<<"\nNo, Array is not Sorted and rotated\n";
    }

}


void question6(){  // given two numbers in array format and find the value of theie sum

    int n;
    cin>>n;
    vector<int> arr1(n);

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    vector<int> arr2(m);

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    vector<int> ans;

    int i=n-1;
    int j=m-1;
    int carry =0;

    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        sum=sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum=sum%10;

        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum=sum%10;

        ans.push_back(sum);
        j--;
    }

    if(carry>0){
        ans.push_back(carry);
    }

    reverse(ans.begin(),ans.end());

    cout<<"\nSum is : ";
    for(int temp : ans){
        cout<<temp<<" ";
    }cout<<endl;

}


int main(){

    // question1();
    // question2();
    // question3();
    // question4();
    // question5();
    question6();

    return 0;
}