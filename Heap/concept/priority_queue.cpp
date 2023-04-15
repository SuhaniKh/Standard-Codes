#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(12);
    pq.push(5);
    pq.push(90);
    cout<<pq.top();
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(89);
    p.push(88);
    p.push(890);
    cout<<endl<<p.top();
    p.empty();
    return 0;
}