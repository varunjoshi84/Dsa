// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int item;
//     cin>>item;
//     int count=-1;
//     for(int i=0; i<n; i++){
//         if(arr[i]==item){
//             count=i;
//             break;
//         }
//     }
//     if(count!=-1){
//         cout<<"element found at: "<<count;
//     }else{
//         cout<<"Element not found";
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    int i=0;
    while(true){
        cin>>n;
        if(n<0){
            break;
        }
        arr[i]=n;
        i++;
       
    }
    for(int k=0; k<i; k++){
        cout<<arr[k]<<" ";
    }
}