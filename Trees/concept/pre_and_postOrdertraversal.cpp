#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root){
    cout<<"enter data :"<<endl;
    int d;
    cin>>d;
    node* newnode=new node(d);
    root=newnode;
    if(d==-1){
        return NULL;
    }
    cout<<"enter left node of "<<d<<endl;
    root->left=buildTree(root->left);
    cout<<"enter right node of "<<d<<endl;
    root->right=buildTree(root->right);
    return root;
}
void preOrder(node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(node* root){
    if(root==NULL)
    return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}
int main(){
    node* root=new node(1);
    root=buildTree(root);
    cout<<"preorder :"<<endl;
    preOrder(root);
    cout<<"postorder :"<<endl;
    postOrder(root);
    return 0;
}