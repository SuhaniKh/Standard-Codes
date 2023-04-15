#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"enter the data"<<endl;
    int d;
    cin>>d;
    node* newnode=new node(d);
    root=newnode;
    if(d==-1){
        return NULL;
    } 
    cout<<"enter the left node of "<<d<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the right node of "<<d<<endl;
    root->right=buildtree(root->right);
    return root;
}
void inorderTraversal(node* root){
    if(root==NULL)
    return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    inorderTraversal(root);
    return 0;
}