#include <iostream>
using namespace std;
int time(int x ,int y){
    if(x==0){
        return y - x;
    }else{
        return (x * 60) + y;
    }
}
int main(){
    int hours,minute;
    cin>>hours>>minute;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];

    // }
    //insertion sort
    // for(int i=1; i<n; i++){
    //     int min = a[i];
    //     int j = i - 1;
    //     while(j>=0 and a[j]>=min){
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     a[j + 1]=min;
    // }
    //selection sort
    // for(int i=0; i<n-1; i++){
    //     int min=i;
    //     for(int j=i; j<n; j++){
    //         if(a[j]>a[j + 1]){
    //             min=j;
    //         }
    //     }
    //     if(min!=i){
    //         swap(a[i],a[min]);
    //     }
    // }
    // for(int i=0; i<n-1; i++){
    //     int min = i;
    //     for(int j=i ; j<n; j++){
    //         if(a[j]>a[j + 1]){
    //             min = j;
    //         }
    //     }
    //     if(min!=i){
    //         swap(a[i],a[min]);
    //     }
        
    // }
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    int x = time(hours, minute);
    cout<<x;
}