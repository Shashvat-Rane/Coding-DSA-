#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    bool ans = true;

    for(int i=2;i<pow(n,0.5);i++){
        if(n%i==0){
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<n<<" is a Prime Number.";
    }
    else{
        cout<<n<<" is not a Prime Number.";
    }

    return 0;
}