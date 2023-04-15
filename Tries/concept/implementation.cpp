#include <bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char ch;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        this->ch=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class trie{
    public:
    TrieNode* root;
    trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        TrieNode* child;
        int i=word[0]-'A';
        if(root->children[i]!=NULL){
            child=root->children[i];
        }
        else{
            child=new TrieNode(word[0]);
            root->children[i]=child;
        }

        insertUtil(child,word.substr(1));
    }

    void insert(string word){
        insertUtil(root,word);
    }

    bool searchWord(TrieNode* root,string word){
        return true;
    }

    bool search(string word){
        return searchWord(root,word);
    }
};
int main(){
    trie t;
    t.insert("suhani");
    cout<<"yes";
    return 0;
}