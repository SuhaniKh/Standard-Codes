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
node* insertInBST(node* &root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data)
    root->right=insertInBST(root->right,d);
    if(d<root->data)
    root->left=insertInBST(root->left,d);

    return root;
}
void takeinput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertInBST(root,data);
        cin>>data;
    }
}
void levelOrder(node* root){
    if(root==NULL)
    return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void inorder(node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int min_ele(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return(temp->data);
}
int max_ele(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return(temp->data);
}
void inorder_sucessor(node *root,int k,node* &sucessor){
    if(root==NULL)
    return;
    if(root->data>k){
        sucessor=root;
        inorder_sucessor(root->left,k,sucessor);
    }
    else{
        inorder_sucessor(root->right,k,sucessor);
    }
}
int main(){
    node *root=NULL;
    takeinput(root);
    levelOrder(root);
    cout<<endl;
    inorder(root);
    cout<<endl<<min_ele(root)<<" "<<max_ele(root);
    node* sucessor=NULL;
    inorder_sucessor(root,25,sucessor);
    cout<<endl<<sucessor->data;
    return 0;
}