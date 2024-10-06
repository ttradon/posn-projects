#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(3)<<sqrt(x*y/3600);
    return 0;
}