#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=1; i<n; i++){
        int min = a[i];
        int j = i - 1;
        bool flag = false;
        while(j>=0 && a[j]>min){
            a[j + 1]=a[j];
            j--;
            flag = true;
        }
        a[j + 1]=min;
        if(flag){
        for(int k=0; k<n; k++){
            cout<<a[k]<<" ";
        }

        cout<<endl;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}