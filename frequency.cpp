#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr + n); 
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    arr[j++] = arr[n - 1];
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
    }
}

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Real array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sort(arr,arr+n);
//     cout<<"Sorted array: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }