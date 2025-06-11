// #include <iostream>
// using namespace std;
// class node{
//         public:
//     int info;
//     node *link;
// };

// void search(node* start, int item) {
//     node* ptr = start;
//     node* loc = NULL;
    
//     while(ptr != NULL) {
//         if(ptr->info == item) {
//             loc = ptr;
//             break;
//         } else {
//             ptr = ptr->link;
//         }
//     }
    
//     if(loc) {
//         cout << "Item found";
//     } else {
//         cout << "Item not found";
//     }
// }
// void display(node* start){
//     node* ptr=start;
//     while(ptr!=NULL){
//         cout<<ptr->info<<" ";
//         ptr=ptr->link;
//     }
//     cout<<endl;
// }
// int main(){
//     int n, data;
//     node *ptr, *newnode;
//     cin>>n;
//     node *start = new node();
//     cin>>data;
//     start->info=data;
//     start->link=NULL;
//     ptr=start;
//     for(int i=2; i<=n; i++){
//         newnode = new node;
//         cin>>data;
//         newnode->info=data;
//         newnode->link=NULL;
//         ptr->link = newnode;
//         ptr=ptr->link;
//     }
//     int item;
//     cin>>item;
//     display(start);
//     search(start,item);
// }
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *link;
// };
// int main(){
    
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
    // int pos;
    // cin>>pos;

    //deletion in an array
    // for(int i=pos; i<n-1; i++){
    //     arr[i]=arr[i+1];
    // }
    // n--;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    //insertion in an array

    // int element;
    // cin>>element;
    // for(int i=n; i>pos; i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[pos] = element;
    // n++;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    //bubble sort
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int item;
    cin>>item;
    // bool flag = false;
    // for(int i=0; i<n; i++){
    //     if(arr[i]==item){
    //         cout<<"found at positon :"<<i+1;
    //         flag = true;
    //         break;
    //     }
    // }
    // if(!flag){
    //     cout<<"not found";
    // }
    int low=0, high = n - 1;
    bool found = false;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] == item){
            cout<<"Element found at pos: "<<mid;
            found = true;
            break;
        }else if(arr[mid]<item){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(!found){
        cout<<"element not found";
    }

}