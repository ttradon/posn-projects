#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"Slope="<<fixed<< setprecision(2)<<(d-b)/(c-a);
    return 0;
}