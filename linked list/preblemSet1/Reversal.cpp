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
void reversal(node* head,node* tail){
    tail=head;
    node* p=head->next;
    head->next=NULL;
    node* prev=head;
    head=p;
    while(head->next!=NULL){
        p=head->next;
        head->next=prev;
        prev=head;
        head=p;
    }

}
int main(){
    node *node1=new node(10);
    node *head=node1;
    node* tail=node1;
    insertAtHead(head,15);
     insertAtHead(head,20);
     print(head);
     insertAtTail(tail,135);
    insertAtTail(tail,230);
    print(head);
    //insertion at middle 
    insertAtPosition(head,tail,16,1);
    insertAtPosition(head,tail,34,4);
    insertAtPosition(head,tail,334,8);
    print(head);
    cout<<head->data<<" "<<tail->data;
    reversal(head,tail);
    cout<<endl;
    print(head);
    cout<<head->data<<" "<<tail->data;





    
    // print(head);


    //insertion at end ;
    
    // print(head);
    return 0;
}