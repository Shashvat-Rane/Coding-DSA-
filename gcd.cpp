#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==b){
        return a;
    }

    if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(b-a,a);
    }
}


int main(){

    // gcd(a,b) = gcd(a-b,b)     or gcd(a,b) = gcd(a%b,b)    --> Euclid's Algorithm


    //  Formula IMP --> LCM(a,b) * GCD(a,b) = a*b 

    // int a = __gcd(24,72); // STL library for direct value

    int a = gcd(24,70);
    cout<<a<<endl;

    return 0;
}