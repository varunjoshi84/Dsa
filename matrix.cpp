#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int m1[r][c];
    int m2[r][c];
    int m3[r][c]={0};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m1[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m2[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            m3[i][j]=0;
            for(int k=0; k<c; k++){    
                m3[i][j]+=m1[i][k] * m2[k][j];
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}