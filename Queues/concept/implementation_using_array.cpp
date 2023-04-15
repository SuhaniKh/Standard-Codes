#include <iostream>
using namespace std;
class queues{
    public:
    int size;
    int qfront;
    int rear;
    int *arr;
    queues(int s){
        size=s;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    bool isempty(){
        if(qfront==rear)
        return true;
        else
        return false;
    }
    void push(int x){
        if(rear==size){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[rear]=x;
        rear++;
    }
    void pop(){
        if(qfront==rear){
            cout<<"underflow"<<endl;
            return;
        }
        qfront++;
        if(qfront==rear)
        {
            rear=0;
            qfront=0;
        }
    }
    int front(){
        if(qfront==rear)
        return-1;
        return(arr[qfront]);
    }
};

int main(){
    queues q(10);
   cout<<q.qfront<<" "<<q.rear<<endl;
    q.push(12);
    cout<<q.qfront<<" "<<q.rear<<endl;
    q.push(8);
    cout<<q.qfront<<" "<<q.rear<<endl;
    q.push(89);
    cout<<q.qfront<<" "<<q.rear<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.qfront<<" "<<q.rear<<endl;
    return 0;
}