#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;// m แถว n หลัก
    cin>>m>>n;
    int mat1[n][m];
    int mat2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mat1[i][j]-mat2[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}