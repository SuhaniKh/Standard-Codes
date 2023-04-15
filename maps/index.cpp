#include <bits/stdc++.h>
using namespace std;
bool deletion(int i , vector<int>arr){
    if(i==0)
    return false;

    if(arr[i-1]<arr[i+1])
    return true;

    return false;

}
int increasig_subarray(vector<int>arr , int n){
    vector<int>v;
    int count=1;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            count++;
        }
        else{
            if(deletion(i,arr) && flag){
                flag =false;
                continue;
            }
            else{
                // count++;
                v.push_back(count);
                count=1;
            }
        }

        v.push_back(count);
    }

    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>maxi)
        maxi=v[i];
    }

    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<increasig_subarray(arr,n);
    return 0;
}