#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    switch(n){
        case 0:
            cout<<"Zero"<<endl;
            break;
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        case 6:
            cout<<"Six"<<endl;
            break;
        case 7:
            cout<<"Seven"<<endl;
            break;
        case 8:
            cout<<"Eight"<<endl;
            break;
        case 9:
            cout<<"Nine"<<endl;
            break;
        default :
            cout<<"Number greater than 9"<<endl;
            break;
    }

    int i=1;
    while(i>0){
        cout<<i<<endl;
        switch(i){
            case 5:
                cout<<"Five pe pohch gaye bhai rokde\n";
                exit(58);
                break;
            default:
                cout<<"Challa h continuous\n";
                break;
        }
        if(i==5){
            cout<<"Ruk gaya\n";
        }
        i++;
    }

    cout<<"Bahar aa gaya\n";

    return 0;
}