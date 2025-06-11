// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     // for(int i=0; i<n; i++){
//     //     cin>>arr[i];
//     // }
//     // cout<<"Array : ";
//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     // cout<<"Reversed Array: ";
//     // for(int i=n-1; i>=0; i--){
//     //     cout<<arr[i]<<" ";
//     // }
//     n = 5;
//     cout<<n/2;
// }

// #include <iostream>
// using namespace std;
// int binary(int arr[], int n, int target){
//     int s=0, e= n - 1;
//     while(s<=e){
//         int mid = s + (e - s)/2;
//         if(arr[mid]==target){
//             return mid;
//         }else if(arr[mid]>target){
//             s = mid + 1;
//         }else{
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int x = binary(arr,n,target);
//     if(x!=-1){
//         cout<<x;
//     }else{
//         cout<<"target not found";
//     }
// }
// for insertion in array
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int pos,element;
//     cout<<"enter postion: "<<endl;
//     cin>>pos;
//     cout<<"enter element: "<<endl;
//     cin>>element;
//     for(int i=n; i>pos; i--){
//         arr[i]=arr[i-1];
//     } 
//     arr[pos]=element;
//     n++;
//     cout<<"Array after insertion: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Array deletion
//  #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int pos;
//     cin>>pos;
//     for(int i=pos; i<n-1; i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
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
    int pos,element;
    cout<<"enter postion: "<<endl;
    cin>>pos;
    cout<<"enter element: "<<endl;
    cin>>element;
    cout<<"Array before insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[pos]=element;
    
    cout<<endl;
    cout<<"Array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        }
}
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//    string str1="Varun";
//    string str2 = "Satyam";
//    int x = str1.compare(str2);
//    if(x==0){
//     cout<<"Strings are same";
//    }else{
//     cout<<"String are not same";
//    }
//    cout<<endl<<str1.compare(1,2,str2,4,5);
   
// }
// #include <iostream>
// using namespace std;
// class sum{
//     public:
//     int n,m;
//     void getdata(){
//         cin>>n>>m;
//         int arr[n][m];
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 cin>>arr[i][j];
//             }
//         }
    
//     int sum=0;
//          for(int i=0; i<n; i++){
//             sum=0;
//             for(int j=0; j<m; j++){    
//                 sum+=arr[i][j];
                
                
//         }
//         cout<<sum<<" ";
       
//     }
//     }

// };
    

// int main(){
// sum s;
// s.getdata();

// }