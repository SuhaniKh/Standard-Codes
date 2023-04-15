#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    pair<string,int>p=make_pair("MY",1);
    m.insert(p);
    m["NAME"]=2;
    m["is"]=3;
    map<string,int>::iterator it=m.begin();
    cout<<"KEY\tVALUE\n";
    while(it!=m.end()){
        cout<<it->first<<"\t"<<it->second<<endl;
        it++;
    }


    return 0;
}