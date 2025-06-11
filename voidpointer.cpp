#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    void *gp;
    gp = &n;
    cout<<*(int*)gp<<endl;
    gp = &str;
    cout<<*(string*)gp<<endl; 
}