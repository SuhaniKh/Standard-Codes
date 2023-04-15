#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(int data , node* &head,node* &tail){
    //creation 
    node*node1=new node(data);
    //insertion
    if(head==NULL){
        node1->next=head;
        head=node1;
        tail=node1;
        return;
    }
    node1->next=head;
    head->prev=node1;
    head=node1;
}
void insertAtTail(int data, node* &tail){
    //creation
    node* node1=new node(data);
    //insertion 
    tail->next=node1;
    node1->prev=tail;
    tail=node1;
}
void insertAtposition(int data, int pos, node* &head, node* &tail){
    //creation :
    node* node1=new node(data);
    //insertion:
    if(pos==1){
        insertAtHead(data,head,tail);
        return;
    }
    node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertAtTail(data,tail);
        return ;
    }
    node* temp2=temp->next;
    temp->next=node1;
    node1->prev=temp;
    node1->next=temp2;
    temp2->prev=node1;
}
int getLength(node* head){
    node*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int main(){
    //node* newnode=new node(10);
    node* head=NULL;
    node* tail=NULL;
    insertAtposition(244,1,head,tail);
    print(head);
    insertAtHead(20,head,tail);
    print(head);
    insertAtHead(23,head,tail);
    insertAtHead(210,head,tail);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;
    insertAtTail(11,tail);
    insertAtTail(34,tail);
    print(head);
    insertAtposition(244,4,head,tail);
    insertAtposition(244,6,head,tail);
    print(head);
    insertAtposition(244,8,head,tail);
    print(head);
    cout<<head->data<<" "<<tail->data;
    cout<<endl<<(getLength(head));
    return 0;
}