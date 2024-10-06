#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    vector<int> vt;
    for(auto &i : v) cin>>i;

    for(int i=0; i<n; i++){
        int tried = 0;
        tried += pow(abs(v[i]-0),2) + pow(abs(v[i]-x),2);
        vt.push_back(tried); 
    }

    auto max = max_element(vt.begin(), vt.end());
    auto min = min_element(vt.begin(), vt.end());

    cout<< *max-*min;
    return 0;
}