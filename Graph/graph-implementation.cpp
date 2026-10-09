#include<bits/stdc++.h>
using namespace std;

template <typename T>

class graph {
    public:

    unordered_map<T,list<T>> adj;

    void addEdge(T u,T v, bool direction){
        adj[u].push_back(v);

        if(!direction){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};


int main(){

    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges: ";
    cin>>m;

    graph<int> g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,false);
    }

    g.printAdjList();

    return 0;
}