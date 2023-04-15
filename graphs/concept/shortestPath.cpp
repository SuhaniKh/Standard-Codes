#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
    void addEdge(int u,int v,int weight){
        pair<int,int>p={v,weight};
        adjList[u].push_back(p);
    }

    void print(){
        for(auto i:adjList){
            cout<<i.first<<":->";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }
};

void dfs(unordered_map<int,list<pair<int,int>>>&adjList,unordered_map<int,bool>&visited,stack<int>&s,int node){
    visited[node]=true;
    for(auto i:adjList[node]){
        if(!visited[i.first]){
            visited[i.first]=true;
            dfs(adjList,visited,s,i.first);
        }
    }
    s.push(node);
}
int main(){

    graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,5,2);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    g.print();


    int n=6;
    unordered_map<int,bool>visited;
    stack<int>s;

    //Topological Order :

    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(g.adjList,visited,s,i);
        }
    }
    int src=1;
    vector<int>distance;
    
    for(int i=0;i<n;i++){
        distance.push_back(INT_MAX);
    }
    distance[src]=0;
    while(!s.empty()){
        int front=s.top();
        s.pop();
        if(distance[front]!=INT_MAX){
            for(auto i:g.adjList[front]){
                int dist=distance[front]+i.second;
                if(dist<distance[i.first])
                    distance[i.first]=dist;
            }
        }
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<distance[i]<<" ";
    // }

    set<pair<int,int>>se;
    cout<<se.empty();
    
    return 0;
}