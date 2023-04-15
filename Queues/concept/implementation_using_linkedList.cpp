#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
class queues{
    public:
    node* front;
    node* back;
    queues(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* newnode=new node(x);
        if(front==NULL){
            front=newnode;
            back=newnode;
            return;
        }
        back->next=newnode;
        back=newnode;
    }
    int pop(){
        if(front==NULL){
            return -1;
        }
        int ans=front->data;
        node* temp=front;
        front=front->next;
        temp->next=NULL;
        delete(temp);
        return ans;
    }
    bool isempty(){
        if(front==NULL)
        return true;
    return false;
    }
    int peek(){
        if(front==NULL)
        return -1;
        return(front->data);
    }

};
int main(){
    queues q;
    q.push(10);
    cout<<q.peek()<<endl;
    q.push(78);
    cout<<q.peek()<<endl;
    q.push(90);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    return 0;
}