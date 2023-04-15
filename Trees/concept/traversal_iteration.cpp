#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node*buildTree(node* root){
    int d;
    cout<<"enter the data "<<endl;
    cin>>d;
    node* temp=new node(d);
    root=temp;
    if(d==-1)
    return NULL;
    cout<<"enter the node in left of "<<d<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the node in the right of "<<d<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inorder(node* root){
    stack<node*>s;
    node * temp=root;
    while(true){
        if(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
        else{
            if(s.empty())
            break;
            temp=s.top();
            s.pop();
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
}
void preorder(node* root){
    stack<node*>s;
    node* temp=root;
    while(true){
        if(temp!=NULL){
            s.push(temp);
            cout<<temp->data<<" ";
            temp=temp->left;
        }
        else{
            if(s.empty())
            break;
            temp=s.top();
            s.pop();
            temp=temp->right;
        }
    }
}
void postorder(node* root){
    stack<node*>s;
    node* temp=root;
    while(true){
        if(temp!=NULL){
            s.push(temp);
            temp=temp->left; 
        }
        else{
            if(s.empty())
            break;
            temp=s.top();
            s.pop();
            if(temp->right!=NULL)
            temp=temp->right;
        }
        cout<<temp->data<<" ";
        
    }
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}