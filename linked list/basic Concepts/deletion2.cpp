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
};
void insertAtHead(node* &head , int data){
    //creation of node :
    node * temp = new node(data);
    //insertion :
    temp->next=head;
    head=temp;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insertAtTail(node* &tail , int data){
   //creation 
   node* temp = new node(data);
   //insertion 
   tail->next=temp;
   tail=temp;
}
void insertAtPosition(node* &head,node* &tail,int data,int pos){
    //creation 
    node* node1=new node(data);
    if(pos==1){
        insertAtHead(head,data);
        return;
        }
        //traverse
    node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    //insertion
    node* temp2=temp->next;
    temp->next=node1;
    node1->next=temp2;
    if(temp2==NULL){
        tail=temp->next;
    }
}
    void deletion(node* &head,int val){
        node*temp=head;
        while(temp!=NULL){
            cout<<"*";
            node*temp2=temp;
            temp=temp->next;
            if(temp->data==val){
                temp2->next=temp->next;
                temp->next=NULL;
            }
        }
    }
int main(){
    node* node1=new node(10);
    node*head=node1;
    node* tail=node1;
    insertAtHead(head,15);
    insertAtHead(head,25);
    insertAtTail(tail,26);
    insertAtTail(tail,88);
    insertAtPosition(head,tail,22,6);
    print(head);
    deletion(head,3);
    print(head);
    return 0;
}