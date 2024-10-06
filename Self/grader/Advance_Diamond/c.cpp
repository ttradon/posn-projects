#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums = 1;
    for(int i=1; i<=n; i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=1; k<=i-1; k++){
            cout<<"*";
        }
    cout<<endl; 
    }
    for(int i=1; i<=n; i++){
        for(int space=1; space<=i-1; space++){
            cout<<" ";
        }
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        for(int k=n-1; k>=i; k--){
            cout<<"*";
        }
    cout<<endl; 
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<nums;
            nums++;
        }
    nums = 1;     
    cout<<endl;
    }
    return 0;
}