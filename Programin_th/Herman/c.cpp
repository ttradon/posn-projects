#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double r;
    cin>>r;

    cout << fixed << setprecision(6) << M_PI*r*r << endl;
    cout << pow(r,2)*2;
    return 0;
}