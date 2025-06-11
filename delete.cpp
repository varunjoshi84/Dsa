#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int pos;
    // cin>>pos;
    // for(int i=pos; i<n; i++){
    //     arr[i]=arr[i+1];
    // }
    // n--;
    // int element;
    // cin>>element;
    // for(int i=n; i>=pos; i--){
    //     arr[i]=arr[i-1];
    // }
    // n++;
    // arr[pos]=element;
    //insertion sort
    // for(int i=1; i<n; i++){
    //     int key=arr[i];
    //     int j = i - 1;
    //     int count=0;
    //     bool flag = false;
    //     while(j>=0 && arr[j]>key){
    //         count++;
    //         arr[j+1]=arr[j];
    //         flag=true;            
    //         j--;
    //     }
    //     arr[j + 1]=key;        
    //     if(flag){            
    //     cout<<"changes after "<< count <<" iteration: ";        
    //     for(int i=0; i<n; i++){
    //         cout<<arr[i]<<" ";            
    //     }
    //     cout<<endl;
    //     }
    // }

    // for(int i=1; i<n; i++){
    //     int key = arr[i];
    //     int j = i - 1;
    //     while(j>=0 && arr[j]>key){
    //         arr[j + 1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=key;
    // }
    // for(int i=1; i<n; i++){
    //     int key = arr[i];
    //     int j = i - 1;
    //     while(arr[j]>key && j>=0){
    //         arr[j + 1]=arr[j];
    //         j--;
    //     }
    //     arr[j + 1]=key;
    // }
    // for(int i=1; i<n; i++){
    //     int key = arr[i];
    //     int j = i - 1;
    //     while(arr[j]>key && j>=0){
    //         arr[j  + 1]=arr[j];
    //         j--;
    //     }
    //     arr[j + 1]=key;
    // }
    //selection sort
    // for(int i=0; i<n; i++){
    //     int min = i;
    //     bool flag = false;
    //     for(int j=i + 1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //             flag =true;
    //         }
    //     }
    //     if(min!=i){
    //         swap(arr[i],arr[min]);
    //     }
    //     if(flag){
    //     cout<<"Array after iteration "<< i + 1<<": ";
    //     for(int k=0; k<n; k++){
    //         cout<<arr[k]<<" ";
    //     } 
    //     cout<<endl;
    //     }
    // }

    // for(int i=0; i<n - 1; i++){
    //     int min = i;
    //     for(int j= i + 1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min=j;
    //         }
    //     }
    //     if(min!=i){
    //         swap(arr[i],arr[min]);
    //     }
    // }
    // for(int i=0; i<n-1; i++){
    //     int min = i;
    //     for(int j=i + 1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }

    //     }
    //     if(min!=i){
    //         swap(arr[i],arr[min]);
    //     }
    // }
    // for(int i=0; i<n -1; i++){
    //     int min = i;
    //     for(int j=i + 1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     if(i!=min){
    //         swap(arr[i],arr[min]);
    //     }
    // }
    // for(int i=0; i<n - 1; i++){
    //     int min = i;
    //     for(int j=i + 1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     if(i!=min){
    //         swap(arr[i],arr[min]);
    //     }
    // }
    // for(int i=1; i<n; i++){
    //     int key = arr[i];
    //     int j = i - 1;
    //     while(j>=0 && arr[j]>key){
    //             arr[j+1]=arr[j];
    //             j--;
    //     }
    //     arr[j + 1]=key;
    // }
    cout<<"Final array: "; 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}