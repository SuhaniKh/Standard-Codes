#include <bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildBinary(node* root){
    cout<<"enter the data "<<endl;
    int data;
    cin>>data;
    node* newnode=new node(data);
    root=newnode;
    if(data==-1){
        return NULL ;
    }
    cout<<"enter the data on the left of "<<data<<endl;
    root->left=buildBinary(root->left);
    cout<<"enter the data on the right of "<<data<<endl;
    root->right=buildBinary(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);               //SEPERATOR
    while(q.size()!=0){
        node* temp= q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(q.size()!=NULL)
            q.push(NULL);
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        }
    }
}
int main(){
    node* root=NULL;
    root=buildBinary(root);
    levelOrderTraversal(root);
    return 0;
}