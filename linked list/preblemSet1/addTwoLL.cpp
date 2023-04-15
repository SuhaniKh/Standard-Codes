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
node *reverse(node* head){
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
node *addTwoLists(node *&first, node *&second)
    {
        first=reverse(first);
        second=reverse(second);
        node* head1=first;
        node* head2=second;
        print (head1);
        print(head2);
        int sum,carry=0;
        node* temp=NULL;
        while(head1!=NULL || head2!=NULL){
            if(head1==NULL)
            sum=head2->data+carry;
            else if(head2==NULL)
            sum=head1->data+carry;
            else
            sum=head1->data + head2->data+carry;
            carry=sum/10;
            node* newnode=new node(sum%10);
            newnode->next=temp;
            temp=newnode;
            
            head1=head1->next;
            head2=head2->next;
        }
        if(carry!=0){
            node* newnode=new node(carry);
            newnode->next=temp;
            temp=newnode;
        }
        return temp;
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
    node* head2=newnode;
    insertAtHead(head2,9);
    print(head2);
    node* head3=addTwoLists(head1,head2);
    print(head3);
    return 0;
}