#include <iostream>
using namespace std;

int noOfSetBits(int n){
    int ans = 0;
    while(n!=0){
        if(n&1)
            ans++;
        n=n>>1;
    }
    return ans;
}

int main() {

    int a,b;
    cin>>a>>b;

    int ans = noOfSetBits(a) + noOfSetBits(b);

    cout<<ans<<endl;

    return 0;
}