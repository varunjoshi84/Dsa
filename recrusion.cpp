// #include <iostream>
// using namespace std;
// // int factorial(int n){
// //     if(n==0){
// //         return 1;
// //     }
// //     int x = factorial(n  - 1);
// //     int y = n * x;
// //     return y;
// // }
// int number(int n){
//    if(n<=10){
//     return 0;
//    }
//    cout<<n<<" ";
//    return number(n-1);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     number(n);
    
// }


// #include <iostream>
// using namespace std;

// int number(int n) {
//     if (n == 0) {  // Base case: Stop recursion if n reaches 10 or less
//         return 0;
//     }
//     cout << n << " ";
//     number(n - 1);
//       // Print the current value of n
//       // Recursive call with n - 1
//       return 0;
// }
// int main() {
//     int n;
//     cin>>n; // Example starting value
//     number(n);   // Call the function
//     return 0;
// }
#include <iostream>
using namespace std;
int towerofHanoi(int n,char src, char des, char base){
    if(n==0){
        return 0;
    }
    int count = 0;
     count += towerofHanoi(n-1,src, base, des);
     cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<endl;
     count++;
     count+=towerofHanoi(n-1,base,des,src);
     return count;
}

int main(){
    int n;
    cin>>n;
    int x = towerofHanoi(n,'A','C','B');
    cout<<"No of moves: "<<x;
}
