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
vector<vector<int>> zigzag(node*root){
    vector<vector<int>>ans;
    if(root==NULL)
    return ans ;
    queue<node*>q;
    q.push(root);
    bool flag=true;
    while(!q.empty()){
        int size=q.size();
        vector<int>sub;
        for(int i=0;i<size;i++){
            node* temp=q.front();
            q.pop();
            int j=flag?i:size-1-i;
            sub[j]=temp->data;

            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        flag=!flag;
        ans.push_back(sub);
    }
    return ans;

}
int main(){
    node* root=NULL;
    root=buildTree(root);
    vector<vector<int>> v= zigzag(root);
    for(int i=0;i<)
    return 0;
}