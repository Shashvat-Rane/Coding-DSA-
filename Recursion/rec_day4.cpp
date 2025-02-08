#include<bits/stdc++.h>
using namespace std;

// Q-1 Reverse a string using recursion

void reverseStr(string& s,int i, int j){
    if(i>j){
        return;
    }

    swap(s[i],s[j]);
    i++;
    j--;

    return reverseStr(s,i,j);
}

void question1(){
    string s;
    cin>>s;

    reverseStr(s,0,s.length()-1);

    cout<<"Reversed String : "<<s<<endl;
}




// Q-2 Checking if string is palindrome or not using recursion

bool check(string s,int i, int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
        return check(s,i+1,j-1);
    }
}

void question2(){
    string s;
    cin>>s;

    if(check(s,0,s.length()-1)){
        cout<<"Yes it is a palindrome string\n";
    }
    else{
        cout<<"No it is not a palindrome string\n";

    }
}

// Q-3 a to the power b using recursion

long long int solve(int a, int b){

    if(b==1){
        return a;
    }

    if(b%2==0){
        long long int t = solve(a,b/2);
        long long int temp = t*t;
        return temp;
    }
    else{
        long long int t = solve(a,b/2);
        long long int temp = a * t * t;
        return temp;
    }
}

void question3(){
    int a,b;
    cin>>a>>b;

    long long int ans = solve(a,b);

    cout<<a<<"^"<<b<<" = "<<ans<<endl;

}

// Q-4 Bubble sort using recursion

void sortArr(int *arr, int n){
    if (n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);

        }
    }

    sortArr(arr,n-1);
}

void question4(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortArr(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main(){

    // question1();
    // question2();
    // question3();
    question4();

    return 0;
}