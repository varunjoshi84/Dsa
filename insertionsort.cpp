#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k=1;
    while(k<n){
        int temp= arr[k];
        int j = k - 1;
        while(temp<=arr[j]&& j>=0){
            arr[j + 1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        k++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
}