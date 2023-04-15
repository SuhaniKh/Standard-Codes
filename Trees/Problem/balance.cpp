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

pair<int,bool> balance(node* root){
    if(root==NULL){
        pair<int,bool> p=make_pair(0,true);
        return p;
    }
    pair<int,bool>left=balance(root->left);
    pair<int,bool>right=balance(root->right);

    bool l=left.second;
    bool r=right.second;
    bool h=(abs(left.first-right.first)<=1);

    pair<int,bool>ans;
    ans.first=max(left.first,right.first)+1;
    ans.second=l&r&h;
    return ans;
}


    int main(){
    node* root=NULL;
    root=createBinaryTree(root);
    cout<<balance(root).second;
    return 0;
}