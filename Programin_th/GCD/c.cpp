#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    int realgcd;
    cin>>a>>b;

    for(int i=1; i<=min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            realgcd=i;
        }
    }
    cout<<realgcd;
    return 0;
}