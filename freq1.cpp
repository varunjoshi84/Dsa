// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector <int> arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     // int s = sizeof(arr)/sizeof(arr[0]);
//     vector <bool> visited(n,false);
//     for(int i=0; i<n; i++){
//         if(visited[i]){
//             continue;
//         }
//         int count = 1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]=true;
//             }
//         }
//         cout<<arr[i]<<" occures : "<<count<<" times";
//         if(count>1){
//             cout<<" s";

//         }
//         cout<<endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<bool> visited(n, false); // initialize all to false

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " occurs: " << count << " time";
        if (count > 1) cout << "s";
        cout << endl;
    }

    return 0;
}
