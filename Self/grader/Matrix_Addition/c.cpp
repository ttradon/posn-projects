#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; // n หลัก m แถว
    cin>>a>>b;
    int arr1[b][a];
    int arr2[b][a];
    
    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            cin>> arr1[i][j];
        }
    }
    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            cin>> arr2[i][j];
        }
    }

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            cout<< arr1[i][j] + arr2[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}