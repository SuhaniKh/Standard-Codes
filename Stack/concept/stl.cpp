#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(5);
    s.push(7);
    s.push(27);
    s.push(71);
    cout<<s.top();
    s.pop();
    cout<<endl<<s.top();
    if(s.empty())
    cout<<"is empty"<<endl;
    else
    cout<<"not empty";
    cout<<endl<<s.size();
    return 0;
}