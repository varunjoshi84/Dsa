#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int top = -1;
    for(int i=0; i<n; i++){
        if(top==n-1){
            cout<<"Overflow"<<endl;
            break;
        }else{
            int val;
            cin>>val;
            top++;
            a[top]=val;
        }     
    }
    if(top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
    for(int i=0; i<=top; i++){
        cout<<a[i]<<" "; 
    }
    }
}
