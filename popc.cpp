#include <iostream>
using namespace std;

const int max = 100;
int stack[max];  
int top = -1;    
int push(int data){
    if (top == max - 1) {
        cout << "Stack overflow" << endl;
        return -1;
    }
    top++;
    stack[top] = data;
    return 0;
}
int pop(){
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    top--;
    return 0;
}
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Current stack: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop(); 
    pop();  
    display();

    return 0;
}
