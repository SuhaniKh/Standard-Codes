#include <bits/stdc++.h>
using namespace std;

int main(){
    //0-basesd indexing :
    int start,end,nodes;
    cin>>nodes;
    int adj[nodes][nodes]={0};
    cin>>start>>end;
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            adj[i][j]=0;
        }
       
    }
    while(start!=-1 && end!=-1){
        adj[start][end]=1;
        cin>>start>>end;
    }
    cout<<adj[0][2];
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}