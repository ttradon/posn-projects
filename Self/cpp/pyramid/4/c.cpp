#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    for(int i=1; i<=n; i++){
        for(int space=0; space<=i-1; space++){
            cout<<" ";
        }
        for(int j=n; j>=i; j--){
            cout<< "x";
        }
        cout<<endl;
    }

    return 0;
}