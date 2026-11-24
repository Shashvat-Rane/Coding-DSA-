#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int i=0;
    int ans = 0;

    while(n>0){
        int t = n%10;
        n=n/10;

        ans = (pow(2,i++) * t) + ans;
    }
    cout<<ans<<endl;
    
    return 0;
}