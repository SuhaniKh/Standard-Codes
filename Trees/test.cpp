#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
node* createBinarytree(node*root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    root=new node(data);
    cout<<"enter the data for the left of "<<data<<endl;
    root->left=createBinarytree(root->left);
    cout<<"enter the data for the right of "<<data<<endl;
    root->left=createBinarytree(root->right);

    return root;
}
void levelOrder(node*root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}

int main(){
    node* root=NULL;
    root=createBinarytree(root);
    levelOrder(root);
    return 0;
}