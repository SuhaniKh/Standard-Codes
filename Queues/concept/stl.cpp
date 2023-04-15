#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(5);
    cout<<q.front()<<endl;
    q.push(6);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty();
    return 0;
}