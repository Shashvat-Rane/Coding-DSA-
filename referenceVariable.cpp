#include<iostream>
using namespace std;

void update(int n){
    n++;
}

void update2(int& n){
    n++;
}


int main(){

    int i = 5;

    int& j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<"\n\n";
    int x=5;
    int y=10;


    cout<<"x Before :"<<x<<endl;
    update(x);                      // pass by value function - alag se memory create kr lega
    cout<<"x After :"<<x<<endl;

    cout<<"y Before :"<<y<<endl;
    update2(y);                      // pass by reference function - alag se memory create nh krega same memory h bas name dusra de diya h
    cout<<"y After :"<<y<<endl;






    return 0;
}