#include<bits/stdc++.h>
using namespace std;

class mystack {

    public:
    vector<int> arr;
    int size;

    mystack(int s){
        this->size = s;
    }

    void push(int d){
        if(arr.size() == size){
            cout<<"Stack Overflow\n";
            return;
        }
        arr.push_back(d);
        cout<<"Pushed "<<d<<" inside stack\n";
    }

    int pop(){
        if(arr.size() == 0){
            cout<<"Stack Underflow\n";
            return -1;
        }
        int t = arr[arr.size()-1];
        arr.pop_back();
        return t;
    }

    int peek(){
        if(arr.size() == 0){
            return -1;
        }
        return arr[arr.size()-1];
    }
};

int main(){

    mystack* st = new mystack(5);

    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);
    st->push(60);

    cout<<st->pop()<<endl;
    cout<<st->pop()<<endl;
    cout<<st->pop()<<endl;
    cout<<st->pop()<<endl;
    cout<<st->pop()<<endl;
    cout<<st->pop()<<endl;

    return 0;
}