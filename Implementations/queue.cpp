#include<bits/stdc++.h>
using namespace std;

class myqueue {
    public:
    int* arr;
    int size;
    int front;
    int rear;

    myqueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enque(int val){
        if(front == -1){
            front = 0;
            rear = 0;
            arr[0]=val;
        }
        else if((rear == size-1 && front == 0) || (rear == front-1)){
            cout<<"Queue Overflow\n";
        }
        else {
            rear++;
            rear %= size;
            arr[rear] = val;
        }
    }

    void deque(){
        if(front == -1){
            cout<<"Queue Underflow\n";
        }
        else if(front == rear){
            cout<<arr[front]<<endl;
            front = -1;
            rear = -1;
        }
        else{
            cout<<arr[front]<<endl;
            front++;
            front %= size;
        }
    }
    
};

int main(){

    myqueue q(5);

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);

    q.deque();

    q.enque(60);
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();


    return 0;
}