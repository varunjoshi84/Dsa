// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int j=0;
//     while(j<n-1){
//         int min = j;
//         int i = j+1;
//         while(i<n){
//             if(a[i]<a[min]){
//                 min = i;
//             }
//             i++;
//         }
//         if(min!=j){
//             swap(a[j],a[min]);
//         }
//         j++;

//     }
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j + 1]=arr[j];
            j--;
        }
        
        arr[j+1]=key;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}