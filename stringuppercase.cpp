#include<iostream>
#include <algorithm>
using namespace std;
// string uppertolower(string str){
//     int len = str.length();
//     for(int i=0; i<len; i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }
//     }
//     cout<<str;
// }
int main(){
    // string str;
    // getline(cin,str);
    // uppertolower(str);
    string str = "varun";
    string str1 = "joshi";
    string str3 = str + str1;
    cout<<str3[5];

}