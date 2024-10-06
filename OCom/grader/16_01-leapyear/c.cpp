#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    cin>>x;
    cout<<((x%100)==0 ? ((x%400)==0 ? "Yes" : "No") : ((x%4)==0 ? "Yes" : "No"));
    /* if(x % 100 == 0){
        if(x % 400 == 0){
            cout<<"Yes";
        }else cout<<"No";
    }else {
        if(x % 4 == 0){
            cout<<"Yes";
        }else cout<<"No";
    } */
    
    return 0;
}