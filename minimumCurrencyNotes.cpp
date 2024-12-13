#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    cout<<"For Total Amount "<<n<<" :\n";

    int a=0;
    int b=0;
    int c=0;

    if(n>=100){
        a=n/100;
        n=n%100;
    }

    if(n>=10){
        b=n/10;
        n=n%10;
    }

    if(n>=1){
        c=n;
    }

    cout<<"Number of 100's Notes = "<<a<<endl;
    cout<<"Number of 10's Notes = "<<b<<endl;
    cout<<"Number of 1's Notes = "<<c<<endl;


    return 0;
}