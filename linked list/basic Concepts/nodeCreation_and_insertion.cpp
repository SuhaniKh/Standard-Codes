#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){             //constructor
        this->data=data;
        this->next=NULL;
    }
};
void insert_at_head(node* &head,int data){

    //creating a node from the data
    node* node1=new node(data);
    //inserting
    node1->next=head;
    head=node1;
}
void print(node* &head){
    //creating copy so that original linked list donot change
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1=new node(10);
    node *head;
    head=node1;
    insert_at_head(head,15);
    print(head);
    insert_at_head(head,20);
    print(head);
    return 0;
}