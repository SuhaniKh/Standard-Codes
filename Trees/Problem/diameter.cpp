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
    int diameter(node* root){
        if(root==NULL)
        return 0;
        int d1=diameter( root->left);
        int d2=diameter( root->right);
        int d3=height( root->left)+height(root->right)+1;
        cout<<d1<<" "<<d2<<" "<<d3<<endl;
        return(max(d1,max(d2,d3)));
    }

int main(){
    node* root=NULL;
    root=createBinaryTree(root);
    cout<<diameter(root);
    return 0;
}