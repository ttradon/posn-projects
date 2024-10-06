#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==0) return 1;
    return n*solve(n-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    cout<< solve(n);
    return 0;
}