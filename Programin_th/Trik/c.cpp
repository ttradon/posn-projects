#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a=1,b=0,c=0;

    string x;
    cin>>x;
    for(char i : x){
        if(i == 'A') swap(a,b);
        if(i == 'B') swap(b,c);
        if(i == 'C') swap(a,c);
    }

    if(a==1) cout<<1;
    if(b==1) cout<<2;
    if(c==1) cout<<3;
    return 0;
}