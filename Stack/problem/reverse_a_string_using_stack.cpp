#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string input;
    cin>>input;
    cout<<input;
    int k=0;
    for(int i=0;i<input.length();i++){
        s.push(input[k]);
        k++;
    }
    while(s.size()!=0){
        cout<<s.top();
        s.pop();
    }
    return 0;
}