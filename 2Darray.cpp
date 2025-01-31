#include<iostream>
using namespace std;


int main(){

    int r,c;
    cin>>r>>c;

    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //   Searching in 2D Array 

    int key;
    cout<<"Element to search : ";
    cin>>key;

    bool check = false;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                check = true;
                break;
            }
        }
        if(check){
            break;
        }
    }

    if(check){
        cout<<"Element Found\n";
    }
    else{
        cout<<"Element Not Found\n";
    }


    //  Row Sum of 2D Array

    int sum=0;

    for(int i=0;i<r;i++){
        sum=0;
        for (int j = 0; j < c; j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i<<"th row : "<<sum<<endl;
    }


    //  Largest Row Sum

    sum=0;
    int mxsum=0;
    int ans=0;

    for(int i=0;i<r;i++){
        sum=0;
        for (int j = 0; j < c; j++){
            sum+=arr[i][j];
        }
        if(sum>mxsum){
            mxsum=sum;
            ans=i;
        }
    }

    cout<<"Row with maximum sum is : "<<ans<<endl;


    //  Print 2D Array in Wave format

    check=true;

    for(int j=0;j<c;j++){
        if(check){
            for(int i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
            check = false;
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            check=true;
        }
    }cout<<endl;


    //  Spiral Matrix Question IMP -> LeetCode 54. Spiral Matrix



    return 0;
}