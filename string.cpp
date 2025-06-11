#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    // cin.ignore();
    string str[n];
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    string ele;
    cin>>ele;
    str[n]=ele;
    n++;
    for(int i=n-1; i>=0; i--){
        cout<<str[i]<<" "; 
    }
}