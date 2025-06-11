// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int j=0;
//     while(j<n-1){
//         int min = j;
//         int i = j + 1;
//         while(i<n){
//             if(arr[i]<arr[min]){
//                 min = i;
//             }
//             i++;
//         }if(min!=j){
//             int temp = arr[j];
//             arr[j]=arr[min];
//             arr[min]=temp;
//         }
//         j++;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
    
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         if (minIndex != i) {
//             int temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {29, 10, 14, 37, 13};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, n);

//     selectionSort(arr, n);

//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n-1;i++){
//         int min=i;
//         bool flag = false;
//         for(int j=i + 1; j<n; j++){
//             if(a[j]<a[min]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(a[i],a[min]);
//             flag = true;
//         }
//         if(flag){
//             for(int k=0; k<n; k++){
//                 cout<<a[k]<<" ";
//             }cout<<endl;
//         }
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
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }

        }
        if(min!=i){
            swap(a[i],a[min]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}