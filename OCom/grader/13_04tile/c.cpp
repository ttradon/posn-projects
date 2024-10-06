#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double a,b;
    cin>>a>>b;
    cout<<a*b<<endl;
    cout<<ceill((a*b)/(0.5*0.5)/6);
    return 0;
}