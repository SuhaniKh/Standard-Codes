#include <bits/stdc++.h> 
using namespace std;
void deleteMiddle(stack<int>&inputStack, int N){
	int n=inputStack.size();
    int m,k=1;
    if(n%2==0)
        m=n/2+1;
    else
        m=(n+1)/2;
    stack<int> s;
    while(inputStack.size()!=0){
        if(k==m){
            k++;
            inputStack.pop();
            continue;
        }
        else{
        s.push(inputStack.top());
        inputStack.pop();
        k++;
    }}
    while (s.size()>0){
        inputStack.push(s.top());
        s.pop();
    }
    
        
    
   // Write your code here
   
}
int main(){
    return 0;
}