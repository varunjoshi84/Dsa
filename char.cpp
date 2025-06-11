#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    char element;
    int pos;
    cin>>element;
    cin>>pos;
    for(int i=n; i>pos; i--){
        arr[i]=arr[i - 1];

    }
    arr[pos]=element;
    n++;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}