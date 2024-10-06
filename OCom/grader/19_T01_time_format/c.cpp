#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin>>a>>b>>c;
    cout<< ((a <= 9) ? "0" : "") << a<< ":"<< ((b <= 9) ? "0" : "") << b<< ":"<<((c <= 9) ? "0" : "") << c;
    return 0;
}