#include <iostream>
using namespace std;
// #define MAX 100
// class stack{
//     int arr[MAX];
//     int top;
//     public:
//     stack(){
//         top = -1;
//     }
//     void push(int x){
//         if(top>=MAX-1){
//             cout<<"Stack overflow";
//             return;
//         }
//         arr[++top] = x;
//         cout<<x<<" ";
//     }
//     void pop(){
//         if(top<0){
//             cout<<"Stack underflow"<<endl;
//         }
//         cout<<top<<endl;
//         arr[top--];
//     }
//     void peek(){
//         if(top<0){
//             return;
//         }
//         cout<<arr[top];
//     }
//     bool isEmpty(){
//         return top == -1;
//     }
//     void display(){
//         if(top<0){
//             cout<<"Stack underflow";
//         }
//         for(int i=0; i<=top; i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };
// int main(){

// }
#include <stack>
int main(){
    stack <int> s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s.push(arr[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}