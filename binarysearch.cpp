#include <iostream>
using namespace std;
int binary(int arr[], int n, int item) {
    int s = 0, e = n - 1;      
    while (s <= e) {
        int mid = s + (e - s) / 2;  
        if (arr[mid] == item) {
            return mid;
        } else if (arr[mid] <item) {
            s = mid + 1;  
        } else {
            e = mid - 1;  
        }
    }  
    return -1;  
}
int main() {
    int n;
    cin >> n;  
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int item;
    cin >> item;  
    int x = binary(arr,n,item);
    if(x!=-1){
        cout<<"element found at: "<<x;
    }else{
        cout<<"element not found";
    }
}
