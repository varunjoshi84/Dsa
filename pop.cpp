#include <iostream>
using namespace std;
int pop(int data){
    int max = 100;
    int stack[max];
    int top == -1;
    if(top== -1){
        cout<<"Stack empty";
        return 0;
    }
    cout<<"Top element: "<<stack[top]<<"Deleted elements";
    top--;
    return 0;
}
int push(int data){
    int max = 100;
    int stack[max];
    int top == -1;
    if(top==max - 1){
        cout<<"Stack overflow";
        return 0;
    }
    top++;
    stack[top]=data;
    return 0;
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop(50);
}