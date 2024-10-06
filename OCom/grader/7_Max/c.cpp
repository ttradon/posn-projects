#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c,max=0;
    cin>>a>>b>>c;
    if(a>max) max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    cout<<max;
    return 0;
}
