#include <bits/stdc++.h>
using namespace std;
class stacks{
    public:
    int size;
    int top;
    int *arr;
    //Constructor
    stacks(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    //INSERTION
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else
        cout<<"Stack Overflow"<<endl;
    }
    //DELETION 
    void pop(){
        if(top>=0)
        top--;
        else
        cout<<"stack underflow"<<endl;
    }
    //CHECK whether stack is empty or not
    bool isempty(){
        if(top>=0)
        return false;
        else
        return true;
    }
    //Top element 
    int eletop(){
        if(top>=0)
        return arr[top];
        else
        return -1;
    }
};
int main(){
  stacks s(4);  
  cout<<s.top<<endl;
  s.push(9);
  cout<<s.eletop()<<endl;
  s.push(78);
  cout<<s.eletop()<<endl;  
  s.push(00);
  cout<<s.eletop()<<endl;
  s.pop();
  cout<<s.eletop()<<endl;
  cout<<s.isempty()<<endl;
    return 0;
}