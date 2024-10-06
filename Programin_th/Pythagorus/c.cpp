#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double a,b;
    cin>>a>>b;
    
    cout<< fixed<< setprecision(6)<< sqrt(pow(a,2) + pow(b,2));
    return 0;
}