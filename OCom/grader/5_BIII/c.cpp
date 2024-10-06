#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    cin>>x;
    if(x<=50) cout<<"free of charge";
    else if(x<=100) cout<<x*0.75;
    else if(x<=200) cout<<x*1;
    else cout<<x*1.2;
    return 0;
}