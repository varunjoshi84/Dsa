#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
  
    getline(cin,str);
    string rev = str;
    // reverse(str.begin(),str.end());
    // if(str==rev){
    //     cout<<"palindrome";
    // }else{
    //     cout<<"Not palindrome";
    // }
    // sort(str.begin(),str.end());
    // size_t x =str.find("run");
    // cout<<str<<" "<<x;
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=="abc"){
            count++;
        }
    }
    cout<<count;

}