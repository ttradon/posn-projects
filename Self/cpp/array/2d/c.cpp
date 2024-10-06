#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10][10];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int x;
            cin>>x;
            arr[i][j] = x;
        }  
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}