#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n[42],ans=0;
    for(int i=0; i<10; i++){
        int x;
        cin>>x;
        x %= 42;
        n[x] = 1;
    }

    for(int i=0; i<42; i++){
        if(n[i] == 1){
            ans++;
        }
    }
    cout<<ans;

    return 0;
}