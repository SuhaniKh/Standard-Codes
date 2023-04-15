#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& h) {
        int b,area=0;
        for(int i=0;i<h.size();i++){
             b=0;
            if(i>=1){
                for(int j=i-1;j>=0;j--){
                    cout<<"*"<<endl;
                    cout<<h[i]<<" "<<h[j]<<endl;
                    if(h[j]>=h[i]&&h[j]!=0){
                    
                    b++;
                    cout<<b<<endl;
                    cout<<"%"<<endl;
                    }
                    else{
                        cout<<"break"<<endl;
                    break;
                    }
                }
            }
            if(i<h.size()-1){
                for(int j=i+1;j<h.size();j++){
                    cout<<"&"<<endl;
                    cout<<h[i]<<" "<<h[j]<<endl;
                    if(h[i]<=h[j]&&h[j]!=0){
                    
                    b++;
                    cout<<b<<endl;
                    cout<<"@"<<endl;
                    }
                    else{
                        cout<<"break"<<endl;
                    break;
                    }
                }
            }
            cout<<b<<" "<<h[i]<<endl;
            
            area=max(area,(b+1)*h[i]);
            cout<<area<<endl;
        }
        return area;
    }

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<largestRectangleArea(v);
    return 0;
}

