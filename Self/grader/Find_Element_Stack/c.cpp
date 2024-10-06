#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a;
    cin>>n;
    vector<int> x(n);
    for(auto &i : x) cin>>i;

    cin>>a;

    auto it = find(x.begin(), x.end(),a);
    if(it == x.end()-1) cout<<"TOP";
    else if(it == x.begin()) cout<<"BOTTOM";
    else if(it == x.end()) cout<<"NULL";
    else cout<< it-x.begin();
    return 0;
}