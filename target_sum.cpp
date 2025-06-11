#include <iostream>
#include <cmath>
using namespace std;
int power(int x, int y){
    int result = 1;
    for(int i=0; i<y; i++){
        result *= x;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int count = 0;
    for(int i=0; i<=n; i++){
        for(int j=i + 1; j<=n; j++){
            if((power(i,p)+ power(j,p))==n){
                count++;
            }
        }
    }
    cout<<count;
}