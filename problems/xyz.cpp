#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    vector<int>nums;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<=i;j++){
                sum=sum+nums[i];
                cout<<sum<<endl;
            }

           // cout<<sum<<endl;
            v.push_back(sum);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    return 0;
}