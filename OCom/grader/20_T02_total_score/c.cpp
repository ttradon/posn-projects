#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double a,b,c,d,e,f;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;

    double mid,final,hw;
    mid = (b/a*100)*40/100;
    final = (d/c*100)*50/100;
    hw = (f/e*100)*10/100;
    
    cout<<fixed<<setprecision(2)<<mid+final+hw;
    return 0;
}