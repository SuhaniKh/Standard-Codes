#include <bits/stdc++.h> 
using namespace std;
void insertSort(stack<int> &s,int x){
    cout<<"hola"<<endl;
    if(s.size()==0 ){
        s.push(x);
        return;
    }
    else if(s.size()!=0)
    {
        if(s.top()<x)
            s.push(x);
            return;
    }
    int num=s.top();
    s.pop();
    cout<<"heya"<<endl;
    insertSort(s,x);
    s.push(num);
    
}

stack<int> sortStack(stack<int> &s)
{
    cout<<"hello"<<endl;
     if(s.size()==0)
         return s;
    int num=s.top();
    s.pop();
    sortStack(s);
    cout<<"hi"<<endl;
    insertSort(s,num);
    
}
int main(){
    stack<int> s;
    s.push(-1);
    s.push(9);
    s.push(-8);
    s.push(99);
    cout<<endl<<s.top()<<endl;
    stack<int>s2=sortStack(s);
    cout<<s2.top()<<endl;
}