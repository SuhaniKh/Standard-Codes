#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>t;
    cout<<t<<endl;
    cin>>s;
    cout<<s<<endl;
    if(s.length()==0)
        cout<<"true";
    int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else
            j++;
        }
        cout<<i;
        
        if(i<s.length()-1)
        cout<<"false";
        else
        cout<<"true";
    
    return 0;
}