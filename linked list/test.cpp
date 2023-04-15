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
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node *reverse(node* &head){
        node*prev=NULL;
        node* curr=head;
        node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        cout<<"*"<<endl;
        return prev;
    }
    void insertAtHead(node* &head , int data){
    //creation of node :
    node * temp = new node(data);
    //insertion :
    temp->next=head;
    head=temp;
}

int main(){
    node* newnode=new node(3);
    node*head1=newnode;
    insertAtHead(head1,4);
    insertAtHead(head1,6);
    print(head1);
    reverse(head1);
    print(head1);
    return 0;
}