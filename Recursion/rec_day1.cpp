#include<bits/stdc++.h>
using namespace std;


//  Q1 - Factorial ------------------------------------------

int factorial(int n){
    if(n==1){
        return 1;
    }

    return n*factorial(n-1);
}

void que1(){
    int n;
    cin>>n;

    cout<<factorial(n);
}


//  Q2 - Power ---------------------------------------------------

int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}

void que2(){
    int n;
    cin>>n;

    cout<<power(n);
}


//  Q3 - Printing number ---------------------------------------------------

void printing(int n){
    cout<<n<<" ";
    if(n<=1){
        return;
    }
    printing(n-1);
}

void que3(){
    int n;
    cin>>n;

    printing(n);
}

int main(){

    // que1();
    // que2();
    que3();

    return 0;
}