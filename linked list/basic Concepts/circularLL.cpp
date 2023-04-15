#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int data=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertNode(int data ,node* &tail,int ele){
    //creation :
    node* newnode = new node(data);
    //insertion
    if(tail==NULL){
        newnode->next=newnode;
        tail=newnode;
        return;
    }
    node* temp = tail;
    while(temp->data!=ele){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;


}
void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<" ";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deletion(node* &tail , int data){
    if(tail==NULL){
        cout<<"the list is empty"<<endl;
        return;
    }
    node* prev = tail;
    node* curr = prev->next;
    if(curr==prev){
        tail=NULL;
        return;
    }
    while(curr->data!=data){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main(){
    node* tail=NULL;
    insertNode(10,tail,1);
    print(tail);
    deletion(tail,10);
    print(tail);
   // insertNode(1,tail,10);
    print(tail);
    insertNode(33,tail,1);
    print(tail);
    insertNode(200,tail,33);
    print(tail);
    insertNode(31,tail,200);
    print(tail);
    deletion(tail,200);
    print(tail);
    cout<<tail->data<<" ";
    insertNode(1,tail,33);
    print(tail);
    return 0;
}