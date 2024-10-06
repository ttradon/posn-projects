#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,total=0;
    cin>>n;
    string sn = to_string(n);
    reverse(sn.begin(), sn.end());

    for(int i=0; i<sn.length(); i++){
        int num = sn[i]-'0';
        total += num * pow(2,i);
    }
    cout<<total;
    return 0;
}