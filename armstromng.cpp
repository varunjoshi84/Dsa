#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int n) {
    int original = n;
    int x = n;
    int rem, multi = 0;
    int count = 0;
    while (n>0){
        rem = n % 10;
        count++;
        n /= 10;
    }
    while(x>0){
        rem = x % 10;
        multi += pow(rem, count);
        x /= 10;
    }
    if (multi == original) {
        return 1;
    } else {
        return -1;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (armstrong(i) == 1){
            cout << i << " "; 
        }
    }
}
