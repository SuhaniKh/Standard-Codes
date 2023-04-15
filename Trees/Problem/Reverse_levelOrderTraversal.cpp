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
node* buildTree(node* root){
    cout<<"enter the data"<<endl;
    int d;
    cin>>d;
    node* newnode=new node(d);
    root=newnode;
    if(d==-1)
    return NULL;
    cout<<"Left of : "<<d<<endl;
    root->left=buildTree(root->left);
    cout<<"right of : "<<d<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
}
vector<int> reverseLevelOrder(node* root){
    queue <node*>q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
        node* temp=q.front();
        ans.push_back(temp->data);
        q.pop();
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
    int i=0,j=ans.size()-1;
    while(j>i){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
    return ans;
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    levelOrder(root);
    cout<<endl;
    vector<int>ans=reverseLevelOrder(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}