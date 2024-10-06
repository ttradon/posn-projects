#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> x(n);
    for(auto &i : x) cin>>i;
    for(auto i : x) cout<<i<<" ";
    return 0;
}