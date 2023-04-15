#include <bits/stdc++.h>
using namespace std;
bool possibleSolution(vector<int> arr, int n, int m,int mid){
    int pagesCount=0,studentcount=1;
    for(int i=0;i<n;i++){
        pagesCount=pagesCount+arr[i];
        if(pagesCount>mid){
            pagesCount=arr[i];
            studentcount++;
            if(studentcount>m || pagesCount>mid)
                return false;
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int min =0,max=0,ans=0;
    for(int i=0;i<n;i++){
        max=max+arr[i];
    }
    int s=0,e=max,mid=s+(e-s)/2;
    while(s<=e){
        cout<<possibleSolution(arr,n,m,mid)<<endl;;
        if(possibleSolution(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid=s+(e-s)/2;
    }
    return mid;
}

int main(){
    vector<int> arr;
    int k,n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cin>>k;
    cout<<endl;
    cout<<"allocated books :"<<allocateBooks(arr,n,k);
    return 0;
}