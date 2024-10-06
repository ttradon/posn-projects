#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 1 1 2 2 3 3 4 
    // 0 1 2 3 4 5 6
    int n, unpair=-1;
    cin>>n;
    vector<int> v(n);

    for(auto &i : v) cin>>i;

    sort(v.begin(),v.end());

    for(int i=0; i<n; i+=2){
        if(v[i] != v[i+1]){
            unpair = v[i];
            break;
        } 
    }

    cout<<unpair;
    return 0;
}