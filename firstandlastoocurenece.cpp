// first and last occurrence of key in an array using linear search
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int first=0;
//     int last = 0;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     for(int i=0; i<n; i++){
//         if(arr[i]==key){
//             first = i + 1;
//             break;
//         }
//     }
//     for(int i=n-1; i>=0; i--){
//         if(arr[i]==key){
//             last=i+1;
//             break;
//         }
//     }
//     cout<<first<<" "<<last;
// }
// first and last occurrence of key in array using binary search

// #include <iostream>
// using namespace std;

// int firstoccurrence(int arr[], int n, int key) {
//     int s = 0;
//     int e = n - 1;
//     int result = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             result = mid;
//             e = mid - 1; 
//             break; 
//         } else if (arr[mid] > key) {
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return result;
// }

// int lastoccurrence(int arr[], int n, int key) {
//     int s = 0;
//     int e = n - 1;
//     int result = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             result = mid;
//             s = mid + 1;  
//         } else if (arr[mid] > key) {
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int first = firstoccurrence(arr, n, key);
//     int last = lastoccurrence(arr, n, key);
//     cout << first << " " << last;
//     return 0;
// }

#include <iostream>
using namespace std;
void countFrequency(int arr[], int n) {
    bool visited[n] = {false}; 
    for (int i = 0; i < n; i++) {
        if (visited[i] == true) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countFrequency(arr, n);
    return 0;
}
