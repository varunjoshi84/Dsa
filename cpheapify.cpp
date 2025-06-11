#include <iostream>
using namespace std;
void swap(int arr[],int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void maxHeapify(int arr[], int n, int i){
    int left = 2 * i + 1;
    int right = 2 * i  + 2;
    int largest = i;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr,i,largest);
        maxHeapify(arr,n,largest);
    }
}
void insertIntoMaxHeap(int arr[], int &n, int value){
    arr[n] = value;
    n++;
    int i= n - 1;
    while(i>0 && arr[(i-1)/2] < arr[i]){
        swap(arr, i, (i-1)/2);
        i = (i - 1) / 2;
    }
}
void buildMaxHeap(int arr[], int n){
    for(int i= (n /2 ) - 1; i>= 0; i--){
        maxHeapify(arr,n,i);
    }
}
void printMaxHeap(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int arr[10];
    int n= 0;
     int num_elements;
     cin>>num_elements;
     for(int i=0; i<num_elements; i++){
    int value;
    cin>>value;
    insertIntoMaxHeap(arr,n,value);
    }
    printMaxHeap(arr,n);
    
}