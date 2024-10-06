#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    int odd=0,even=0;
    cin>>a>>b>>c;

    if(a > 0 && b > 0 && c > 0) cout<<"All numbers are positive."<<endl;
    else cout<<"At least one number is negative."<<endl;
    
    if(a % 2 == 0) even++;
    else odd++;

    if(b % 2 == 0) even++;
    else odd++;

    if(c % 2 == 0) even++;
    else odd++;

    if(odd == 3) cout<<"All numbers are odd.";
    else if(even == 3) cout<<"All numbers are even.";
    else cout<<"Mixed numbers: "<<even<<" even and "<<odd<<" odd.";
    return 0;
}