#include<bits/stdc++.h>
using namespace std;

class Nqueue {
    int* arr;
    int n;

    int* next;
    int* front;
    int* rear;
    int freeSpot;

    public:

    Nqueue(int n,int qn){
        this->n = n;
        this->arr = new int[n];
        this->next = new int[n];
        this->front = new int[qn];
        this->rear = new int[qn];

        for(int i=0;i<qn;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        freeSpot = 0;

        for(int i=0;i<n;i++){
            next[i]=i+1;
        }

        next[n-1] = -1;
    }

    void enqueue(int value, int qn){
        if(freeSpot == -1){
            cout<<"Overflow\n";
            return;
        }

        int index = freeSpot;
        freeSpot = next[index];

        if(front[qn-1] == -1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        rear[qn-1] = index;
        next[index] = -1;
        arr[index] = value;
    }

    int dequeue(int qn) {
        if(front[qn-1] == -1){
            cout<<"Underflow\n";
            return -1;
        }

        int index = front[qn-1];
        front[qn-1]=next[index];

        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }


};

int main(){

    Nqueue nq(5,3);

    nq.enqueue(10,1);
    nq.enqueue(20,1);
    nq.enqueue(1,2);
    nq.enqueue(100,3);
    nq.enqueue(200,3);

    cout<<nq.dequeue(1)<<endl;
    cout<<nq.dequeue(1)<<endl;
    cout<<nq.dequeue(1)<<endl;
    cout<<nq.dequeue(2)<<endl;
    cout<<nq.dequeue(2)<<endl;
    cout<<nq.dequeue(3)<<endl;
    cout<<nq.dequeue(3)<<endl;
    cout<<nq.dequeue(3)<<endl;

    nq.enqueue(2,2);
    cout<<nq.dequeue(2)<<" here "<<endl;



    return 0;
}