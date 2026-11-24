#include <iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int nCr(int n, int r) {
    int val = fact(n)/(fact(r) * fact(n-r));

    return val;
}

int main() {
    
    int a,b;
    cin>>a>>b;

    int ncr = nCr(a,b);

    cout<<ncr<<endl;
    
    return 0;
}