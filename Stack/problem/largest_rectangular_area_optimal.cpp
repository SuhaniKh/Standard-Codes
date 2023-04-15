#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& h) {
        vector<int>next;
        vector<int>prev;
        stack<int>s;
        s.push(-1);
        int n=h.size();
        int area=0,b,k;
        for(int i=n-1;i>=0;i--){
            k=0;
            while(s.top()>=h[i]){
                k++;
                s.pop();
            }
            s.push(h[i]);
            next.push_back(n-(i+1)-k);
        }
        int i=0,j=h.size()-1;
        while(i<j){
            swap(next[i],next[j]);
            i++;
            j--;
        }
        
        for(int i=0;i<n;i++){

            k=0;
            while(s.top()>=h[i]){
                k++;
                s.pop();
            }
            s.push(h[i]);
            prev.push_back(i-k-1);
        }
        for(int i=0;i<h.size();i++){
            cout<<next[i]<<" "<<prev[i]<<endl;
            b=next[i]-prev[i]-1;
            cout<<b<<" "<<h[i]<<endl;
            area=max(area,b*h[i]);
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


