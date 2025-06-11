// #include <iostream>
// using namespace std;
// int main(){
// int n;
// // cout<<"Size of array: ";
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// int b[100]={0};
// for(int i=0;i<n;i++){
//     b[a[i]]++;
// }
// for(int i=0;i<10;i++){
//     cout<<i<<" repeats: "<<b[i]<<" times\n";
// }
// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i + 1;j<n; j++){
            if(a[i]==a[j]){

                count++;
            }else{
                break;
            }
            
        }
        cout<<count<<" times:->"<<a[i]<<endl;
        i +=(count-1);
    }
}