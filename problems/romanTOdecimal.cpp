#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<s.length();
    vector<int>v;
        for(int i=0;i<s.length();i++){
            switch (s[i]){
                case 'I':
                v.push_back(1);
                break;
                case 'V':
                v.push_back(5);
                break;
                case 'X' :
                v.push_back(10);
                break;
                case 'L':
                v.push_back(50);
                break;
                case 'C':
                v.push_back(100);
                break;
                case 'D':
                v.push_back(500);
                break;
                case 'M':
                v.push_back(1000);
                break;

            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        int num=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1])
            num=num+v[i];
            else
            num=num+v[i]-(2*v[i-1]);
        }
        cout<<endl<<num;
    return 0;
}