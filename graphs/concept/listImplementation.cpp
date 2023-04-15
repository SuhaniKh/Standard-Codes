#include <bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
    public:
    unordered_map<T,list<T>>adj;
    void addEdge(int u,int v,bool direction){
        //directon=0 --> undirected && direction==1 --> directed

        //creation of edges from u to v;
        adj[u].push_back(v);
        if(!direction){
            adj[v].push_back(u);
        }
    }

    void printListGraph(){
        for(auto i:adj){
            cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<",";
                }
                cout<<endl;
        }
    }
};
int main(){
    graph<int> g;
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printListGraph();
    return 0;
}