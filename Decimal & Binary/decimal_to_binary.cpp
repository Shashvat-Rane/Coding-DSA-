#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    // Approach 1

    int num = n;
    string ans = "";

    while(num > 0){
        int t = num%2;
        ans = to_string(t) + ans;
        num = num/2;
    }

    cout<<ans<<endl;

    // Approach 2

    num = n;
    int i = 0;
    int res = 0;

    while(num>0){
        res = (num&1)*pow(10,i++) + res;
        num = num>>1;
    }

    cout<<res<<endl;
    
    return 0;
}