#include<iostream>
using namespace std;

// Quick Sort

int partition(int *arr, int s, int e){

    int p=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            p++;
        }
    }
    p+=s;

    swap(arr[s],arr[p]);

    int i=s;
    int j=e;

    while(i<p && j>p){
        while(arr[i]<arr[p]){
            i++;
        }
        while(arr[j]>arr[p]){
            j--;
        }

        if(i<p && j>p){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return p;
}

void quickSort(int *arr, int s , int e){
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){

    int n = 6;
    int arr[6] = {5 , 2 , 10 , 1 , 9 , 0};

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}