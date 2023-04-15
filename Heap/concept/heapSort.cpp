#include <bits/stdc++.h>
using namespace std;
class heap{
    public :
    int size;
    int arr[100];
    heap(){
        size=0;
    }
};
void heapify(int *arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<=n && arr[largest]<arr[left])
    largest=left;
    if(right<=n && arr[largest]<arr[right])
    largest=right;
    if(i!=largest){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int *arr,int n){
    while(n>=1){
        swap(arr[n],arr[1]);
        n--;
        heapify(arr,n,1);
    }
    return;
}
void buildheap(int *arr, int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
int main(){
    int arr[]={-1,70,60,55,45,50};
    buildheap(arr,5);
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,5);
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}