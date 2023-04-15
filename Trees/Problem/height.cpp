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
node* createBinaryTree(node* root){
        cout<<"enter the data"<<endl;
        int data;
        cin>>data;
        root=new node(data);
        if(data==-1){
            return NULL;
        }
        cout<<"enter the data for the left of "<<data<<endl;
        root->left=createBinaryTree(root->left);
        cout<<"enter the data for the right of "<<data<<endl;
        root->right=createBinaryTree(root->right);
        return root;
    }
    int height (node* root)
    {
        if(root==NULL)
        return 0;
        int h1=height(root->left);
        int h2=height(root->right);
        return(1+(max(h1,h2)));
    }
int main(){
    node* root=NULL;
    root=createBinaryTree(root);
    cout<<height(root);
    return 0;
}