#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int>a;
    a.push_back(12);
    cout<<a.front()<<" "<<a.back()<<endl;
    a.push_front(13);
    cout<<a.front()<<" "<<a.back()<<endl;
    a.push_back(78);
    cout<<a.front()<<" "<<a.back()<<endl;
    a.pop_back();
    cout<<a.front()<<" "<<a.back()<<endl;
    a.pop_front();
    cout<<a.front()<<" "<<a.back()<<endl;
    cout<<a.empty()<<endl;
    a.pop_back();
    cout<<a.front()<<" "<<a.back()<<endl;
    cout<<a.empty()<<endl;
    a.pop_back();
    cout<<a.front()<<" "<<a.back()<<endl;
    return 0;
}