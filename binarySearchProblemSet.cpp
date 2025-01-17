#include<iostream>
using namespace std;

// Question-1 : Find the first and last occurrence of an element in an array

int firstOccurrence(int n,int k, int arr[]){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;   // not (s+e)/2
    int ans=-1;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid = s+ (e-s)/2;   // not (s+e)/2
    }
    return ans;
}

int LastOccurrence(int n,int k, int arr[]){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;   // not (s+e)/2
    int ans=-1;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid = s+ (e-s)/2;   // not (s+e)/2
    }
    return ans;
}


void question1(){  

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int firstocc = firstOccurrence(n,k,arr);
    int lastocc = LastOccurrence(n,k,arr);

    cout<<"First Occurrence At Index : "<<firstocc<<endl;
    cout<<"Last Occurrence At Index : "<<lastocc<<endl;

}



// Question-2 : No of occurrences of element in an array

void question2(){
    // same as above , first occurrence nikal li then last occurrence nikal li
    // and then last - first + 1 kr diya toh number of occurrences nikal jaegi
}


// Question-3 : Peak Index in an Mountain Array

void question3(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int e = n-1;

    int mid = (s+e)/2;

    while(s<=e){
        if(mid==0 || mid==(n-1)){
            cout<<"Peak Index is "<<mid<<" with value "<<arr[mid]<<endl;
            return;
        }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"Peak Index is "<<mid<<" with value "<<arr[mid]<<endl;
            return;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            e=mid-1;
        }

        mid=(s+e)/2;
    }

}

// Question-4 : Find Pivot Index in an Array 
//              (Index where sum of all elements in the left is equal to sum of all elements in the right)

void question4(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    int ls=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    for(int i=0;i<n;i++){
        if(ls==(sum-arr[i])){
            cout<<"Pivot index in the array is : "<<i<<endl;
            return;
        }

        ls+=arr[i];
        sum-=arr[i];
    }
    cout<<"There is no pivot index in the given array"<<endl;
    return;
}


// Question-5 : Find Pivot Index in an Array 
//              (Sorted and Rotated Array me pivot nikalna h, e.g. 7 , 9 , 1 , 2 , 3  --> pivot = index 2)


void question5(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=n-1;
    int mid = s+ (e-s)/2;

    if(arr[e]>=arr[0]){
        cout<<"Pivot Index : "<<0<<endl;
        return;
    }

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Pivot Index : "<<s<<endl;
    return;
}

// Question-6 : Square Root of an Integer

void question6(){
    int n;
    cin>>n;

    int s=0;
    int e=n;
    long long int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        long long int temp = mid*mid;

        if(temp==n){
            ans=mid;
            break;
            cout<<"Square Root of "<<n<<" is "<<mid<<endl;
        }
        else if(temp>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }

    cout<<"Square root of "<<n<<" is "<<ans<<endl;
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