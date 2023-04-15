#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        left=right=NULL;
    }
};
node* buildTree(node* root){
    queue<node*>q;
    int d;
    cout<<"enter the data : "<<endl;
    cin>>d;
    node* newnode=new node(d);
    root=newnode;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter the left of : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter the rght of : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }

    }
    return root;
}
void levelOrder(node* root){
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
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
}
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    levelOrder(root);
    return 0;
}