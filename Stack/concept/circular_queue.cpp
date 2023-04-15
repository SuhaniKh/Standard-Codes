#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    public:
    // Initialize your data structure.
    int size,rear,front;
    int *arr;
    CircularQueue(int n){
        // Write your code here.
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear==size-1)||(rear==(front-1)))
            return false;
        else if(front==-1)
            rear=front=0;
        else if(front!=0 && rear==size-1)
            rear=0;
        else
            rear++;
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1)
            return -1;
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear && front!=-1){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};



int main(){
    CircularQueue q(4);
    cout<<q.enqueue(5)<<endl;
    cout<<q.enqueue(8)<<endl;
    cout<<q.dequeue()<<endl;

    
    return 0;
}



