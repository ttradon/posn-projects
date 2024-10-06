#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double m,n,a;
    cin>>m>>n>>a;

    cout<< floor((m+n)*2/a-1);
    return 0;
}