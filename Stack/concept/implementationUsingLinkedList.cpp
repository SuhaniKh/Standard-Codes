#include <bits/stdc++.h>
using namespace std;
class stacks{
    public :
    int data;
    stacks* next;
    stacks(int data){
        this->data=data;
        this->next=NULL;
    }
    //Insertion :
    void push(int data,stacks* &head){
        stacks* top=new stacks(data);
        top->next=head;
        head=top;
    }
    //Deletion :
    void pop(stacks* &head){
        if(head!=NULL){
        stacks* temp=head;
        head=head->next;
        delete temp;}
        else
        cout<<"stack underflow"<<endl;
    }
    //check if the stack is empty or not
    bool isempty(stacks* &head){
        if(head==NULL)
        return true;
        else
        return false;
    }
    //top element
    int peak(stacks * head){
        if(head==NULL)
        return -1;
        else
        return head->data;
    }
};
int main(){
    stacks* s=new stacks(10);
    s->push(3,s);
    cout<<s->peak(s)<<endl;
    s->push(5,s);
    cout<<s->peak(s)<<endl;
    s->pop(s);
    cout<<s->peak(s)<<endl;
    cout<<s->isempty(s)<<endl;
    s->pop(s);
    s->pop(s);
    s->pop(s);
    cout<<s->peak(s)<<endl;
    return 0;
}